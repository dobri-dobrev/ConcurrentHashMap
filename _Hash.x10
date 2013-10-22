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
	private var h : HashMap[long,long];
	private var counter : long;
	private var defaultValue : Long; // a default value is returned when an element with a given key is not present in the dict.
	private var buffer:Rail[WorkRecord];
	private var isL: Boolean; //global lock
    private var locks:Rail[long];
    val b: Bakery;
	public def this(defV : long){
		counter = 0n;
		isL = false;
		h = new HashMap[long,long]();
		defaultValue = defV;
		buffer = new Rail[WorkRecord](8n);
        b = new Bakery(8);
        locks = new Rail[long](1000);
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
        
        //locks(key)=1L;
 	    var position:long = Runtime.workerId();
 	    buffer(position) = new WorkRecord(true, key, value);

        b.lock(position);
        buffer(position).id = ++counter;
        h.put(buffer(position).key, buffer(position).value);
        buffer(position).result = 1; //ready to be shipped out
        b.unlock(position);
        //locks(key) = 0L;

 	    return buffer(position).id;

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
 	    //buffer(position) = new WorkRecord(false, key, 0);
        while(locks(key)==1){
            System.threadSleep(1);
        }
        b.lock(position);
        locks(key) = 1;
        var result:long = 0;
        val boxedValue = h.get(key);
        var count:long = ++counter;
        try{
            result = boxedValue();
        }
        catch(Exception){
            result = defaultValue;
        }
        locks(key) = 0;
        b.unlock(position);

 	    
 	    return new Pair[long,long](count, result);

        
    }





}