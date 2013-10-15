public class WorkRecord{
	
		public val isPut: Boolean;
		public val key: long;
		public val value: long;
		public var isDone: Boolean = false;
		public var result: long;
		public var id: long;
		def this(isP: Boolean , k: long , v: long)
        {
            isPut  = isP;
			key    = k;
            value         = v;
            result = 0L;
            id = 0L;
        }
	
}