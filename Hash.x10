import x10.util.Timer;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Box;
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
        var brea:long = 500L;
        while(buffer(position).isDone == false){
            if(isL==true && brea>0L){
                System.threadSleep(POLL_TIME);
                brea--;
            }
            //b.lock(position);
            
            atomic{
                if(brea==0L)
                    isL = false;
                if(isL == false&& buffer(position).isDone == false){
                    isL = true;
                    if(buffer(position).isDone == false)
                        executeTasks();
                    isL = false;
                }
            }
            
            
            
        }

 	    
        val i = buffer(position).id;
 	    buffer(position) = null;
 	    return i;
 	    

 	   

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
        buffer(position).isDone= false;
        var brea:long = 500L;
        while(buffer(position).isDone == false){
            if(isL==true && brea>0L){
                 System.threadSleep(POLL_TIME);
                 brea--;
            }
            atomic{
                if(brea==0L)
                    isL = false;
                if(isL==false && buffer(position).isDone == false){
                    isL = true;
                    if(buffer(position).isDone == false)
                        executeTasks();
                    isL = false;
                }
                
            }
           
            

        }
        val i = buffer(position).id;
        val r = buffer(position).result;
        buffer(position) = null;
 	    return new Pair[long,long](i,r);

        
    }
    private def executeTasks(){
    	atomic{
               for(var i:long = 0; i<buffer.size; i++){
                if(buffer(i)!= null){
                    if(buffer(i).isPut==true){
                        if(buffer(i).isDone==false){
                           
                                buffer(i).id = ++counter;
                               
                                h.put(buffer(i).key, buffer(i).value);
                                buffer(i).isDone = true;
                            
                        }
                    }
                    else{
                        if(buffer(i).isDone==false){
                            
                                var boxedValue:Box[long] = h.get(buffer(i).key);
                                
                                try{
                                    buffer(i).result = boxedValue();
                                       buffer(i).id = ++counter;
                                       buffer(i).isDone = true;

                                }
                                catch(Exception){
                                      
                                       buffer(i).result = defaultValue;
                                       buffer(i).id = ++counter;
                                       buffer(i).isDone = true;   
                                   }
                                   
                            
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