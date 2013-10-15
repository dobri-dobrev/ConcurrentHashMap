public class WorkRecord{
	
		public val isEnqueue: Boolean;
		public val key: long;
		public val value: long;
		public var isDone: Boolean = false;
		public val result: long;
		def this(isEn: Boolean , k: long , v: long)
        {
            isEnqueue  = isEn;
			key    = k;
            value         = v;
            result = 0L;
        }
	
}