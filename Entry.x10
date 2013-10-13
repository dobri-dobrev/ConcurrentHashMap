public class Entry{
	public var key: long;
	public var value: long;
	public def this(k : long, v: long){
		key = k;
		value = v;
	}
	public def setValue( v: Long){
		value = v;
	}
}