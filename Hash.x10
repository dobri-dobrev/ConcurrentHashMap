import x10.util.Timer;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Pair;
/**
 * This is the class that provides the HashMap functionalities.
 *
 * The assignment is to replace the content of this class with code that exhibit
 * a better scalability.
 */
public class Hash
{
	private val POLL_TIME = 2;
	private var h : HashMap[long,long];
	private var counter : long;
	private var defaultValue : Long; // a default value is returned when an element with a given key is not present in the dict.
	private var buffer:Rail[WorkRecord];
	private var isL: Boolean; //global lock
	public def this(defV : long){
		counter = 0n;
		isL = false;
		h = new HashMap[long,long]();
		defaultValue = defV;
		buffer = new Rail[WorkRecord](8n);

	}

    /**
     * Insert the pair <key,value> in the hash table
     *     'key'
     *     'value' 
     *
     * This function return the unique order id of the operation in the linearized history.
     */
    //single thread buffer never gets overoccupied
    public def put(key: long, value: long) : long
    {
 	    var position:long = Runtime.workerId();
 	    buffer(position) = new WorkRecord(true, key, value);
 	    while(buffer(position).result== 0 && isL){
 	    	System.threadSleep(POLL_TIME);
 	    }
 	    if(buffer(position).result== 0){
 	    	isL = true;
 	    	executeTasks();
 	    	isL = false;

 	    }
 	    
 	    return buffer(position).id;
 	    

 	    //printBuffer();
		
		// var r : long = -1;

		// atomic{
		// 	r = ++counter;
		// 	h.put(key,value);
			
		// }
		// buffer(position) = null;
		// return r;

    }

    

    /**
     * get the value associated to the input key
     *     'key'
     *
     * This function return the pair composed by
	 *     'first'    unique order id of the operation in the linearized history.
	 *     'second'   values associated to the input pair (defaultValue if there is no value associated to the input key)
     */
    public def get(key: long) : Pair[long,long]
    {
    	var position:long = Runtime.workerId();
 	    buffer(position) = new WorkRecord(false, key, 0);
 	    while(buffer(position).result== 0 && isL){
 	    	System.threadSleep(POLL_TIME);

 	    }
 	    if(buffer(position).result== 0){
 	    	isL = true;
 	    	executeTasks();
 	    	isL = false;

 	    }
 	    return new Pair[long,long](buffer(position).id, buffer(position).result);
		// var i:long = -1;
		// var value:long = defaultValue;
		

		// atomic{
		// 	i = ++counter;
		// 	val boxedValue = h.get(key);
		// 	try{
		// 		value = boxedValue();
		// 	}catch(Exception){}
		// }

        
    }
    private def executeTasks(){
    	for(var i:long = 0; i<buffer.size; i++){
    		if(buffer(i)!= null){
    			if(buffer(i).isPut){
    				if(buffer(i).result==0){
    					atomic{
    						buffer(i).id = ++counter;
    						h.put(buffer(i).key, buffer(i).value);
    						buffer(i).result = 1; //ready to be shipped out
    					}
    				}
    			}
    			else{
    				if(buffer(i).result==0){
    					atomic{
    						val boxedValue = h.get(buffer(i).key);
    						buffer(i).id = ++counter;
    						try{
    							buffer(i).result = boxedValue();
    						}
    						catch(Exception){}
    					}
    				}

    			}
    		}
    	}

    }



    private def printBuffer(){
    	var s:String = "";
    	for(var i:long = 0; i<buffer.size; i++){
    		if(buffer(i)==null){
    			s+= "nada \n";
    		}
    		else{
    			s+= i + ": "+ buffer(i).key + ", "+ buffer(i).value+"\n";	
    		}
    		
    	}
    	Console.OUT.println(s);
    }




}