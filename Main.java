
@x10.runtime.impl.java.X10Generated public class Main extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    private static final long serialVersionUID = 1L;
    public static final x10.rtt.RuntimeType<Main> $RTT = x10.rtt.NamedType.<Main> make(
    "Main", Main.class
    );
    public x10.rtt.RuntimeType<?> $getRTT() {return $RTT;}
    
    public x10.rtt.Type<?> $getParam(int i) {return null;}
    private void writeObject(java.io.ObjectOutputStream oos) throws java.io.IOException { if (x10.runtime.impl.java.Runtime.TRACE_SER) { java.lang.System.out.println("Serializer: writeObject(ObjectOutputStream) of " + this + " calling"); } oos.defaultWriteObject(); }
    public static x10.serialization.X10JavaSerializable $_deserialize_body(Main $_obj , x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
    
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + Main.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
    
        Main $_obj = new Main((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
        
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
    
        
    }
    
    // constructor just for allocation
    public Main(final java.lang.System[] $dummy) { 
    }
    
        
//#line 22 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static long WORKERS = 8L;
        
//#line 23 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static long INS_PER_THREAD = 1000L;
        
//#line 24 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static long KEY_LIMIT = 100L;
        
//#line 25 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static long VALUE_LIMIT = 100L;
        
//#line 26 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static long defaultValue = 0L;
        
//#line 27 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public static double RATIO = 0.8;
        
//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
@x10.runtime.impl.java.X10Generated public static class LogEntry extends x10.core.Struct implements x10.serialization.X10JavaSerializable
                                                                                     {
            private static final long serialVersionUID = 1L;
            public static final x10.rtt.RuntimeType<LogEntry> $RTT = x10.rtt.NamedStructType.<LogEntry> make(
            "Main.LogEntry", LogEntry.class, new x10.rtt.Type[] {x10.rtt.Types.STRUCT}
            );
            public x10.rtt.RuntimeType<?> $getRTT() {return $RTT;}
            
            public x10.rtt.Type<?> $getParam(int i) {return null;}
            private void writeObject(java.io.ObjectOutputStream oos) throws java.io.IOException { if (x10.runtime.impl.java.Runtime.TRACE_SER) { java.lang.System.out.println("Serializer: writeObject(ObjectOutputStream) of " + this + " calling"); } oos.defaultWriteObject(); }
            public static x10.serialization.X10JavaSerializable $_deserialize_body(Main.LogEntry $_obj , x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + LogEntry.class + " calling"); } 
                $_obj.direction = $deserializer.readBoolean();
                $_obj.order = $deserializer.readLong();
                $_obj.key = $deserializer.readLong();
                $_obj.value = $deserializer.readLong();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                Main.LogEntry $_obj = new Main.LogEntry((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
                
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
                $serializer.write(this.direction);
                $serializer.write(this.order);
                $serializer.write(this.key);
                $serializer.write(this.value);
                
            }
            
            // zero value constructor
            public LogEntry(final java.lang.System $dummy) { this.direction = false; this.order = 0L; this.key = 0L; this.value = 0L; }
            // constructor just for allocation
            public LogEntry(final java.lang.System[] $dummy) { 
            }
            
                
//#line 32 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
public boolean direction;
                
//#line 33 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
public long order;
                
//#line 34 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
public long key;
                
//#line 35 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
public long value;
                
                
//#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
// creation method for java code (1-phase java constructor)
                public LogEntry(final boolean direction,
                                final long order,
                                final long key,
                                final long value){this((java.lang.System[]) null);
                                                      Main$LogEntry$$init$S(direction,order,key,value);}
                
                // constructor for non-virtual call
                final public Main.LogEntry Main$LogEntry$$init$S(final boolean direction,
                                                                 final long order,
                                                                 final long key,
                                                                 final long value) { {
                                                                                            
//#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
;
                                                                                            
//#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"

                                                                                            
//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.__fieldInitializers_Main_LogEntry();
                                                                                            
//#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.direction = direction;
                                                                                            
//#line 40 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.order = order;
                                                                                            
//#line 41 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.key = key;
                                                                                            
//#line 42 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.value = value;
                                                                                        }
                                                                                        return this;
                                                                                        }
                
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public java.lang.String
                                                                                               typeName(
                                                                                               ){try {return x10.rtt.Types.typeName(this);}
                catch (java.lang.Throwable exc$2120) {
                throw x10.runtime.impl.java.ThrowableUtils.ensureX10Exception(exc$2120);
                }
                }
                
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public java.lang.String
                                                                                               toString(
                                                                                               ){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1871 =
                      "struct Main.LogEntry: direction=";
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1872 =
                      this.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1873 =
                      ((t1871) + ((x10.core.Boolean.$box(t1872))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1874 =
                      ((t1873) + (" order="));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1875 =
                      this.
                        order;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1876 =
                      ((t1874) + ((x10.core.Long.$box(t1875))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1877 =
                      ((t1876) + (" key="));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1878 =
                      this.
                        key;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1879 =
                      ((t1877) + ((x10.core.Long.$box(t1878))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1880 =
                      ((t1879) + (" value="));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1881 =
                      this.
                        value;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1882 =
                      ((t1880) + ((x10.core.Long.$box(t1881))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1882;
                }
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public int
                                                                                               hashCode(
                                                                                               ){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
int result =
                      1;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1883 =
                      result;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1885 =
                      ((8191) * (((int)(t1883))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1884 =
                      this.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1886 =
                      x10.rtt.Types.hashCode(t1884);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1887 =
                      ((t1885) + (((int)(t1886))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
result = t1887;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1888 =
                      result;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1890 =
                      ((8191) * (((int)(t1888))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1889 =
                      this.
                        order;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1891 =
                      x10.rtt.Types.hashCode(t1889);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1892 =
                      ((t1890) + (((int)(t1891))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
result = t1892;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1893 =
                      result;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1895 =
                      ((8191) * (((int)(t1893))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1894 =
                      this.
                        key;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1896 =
                      x10.rtt.Types.hashCode(t1894);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1897 =
                      ((t1895) + (((int)(t1896))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
result = t1897;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1898 =
                      result;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1900 =
                      ((8191) * (((int)(t1898))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1899 =
                      this.
                        value;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1901 =
                      x10.rtt.Types.hashCode(t1899);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1902 =
                      ((t1900) + (((int)(t1901))));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
result = t1902;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final int t1903 =
                      result;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1903;
                }
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public boolean
                                                                                               equals(
                                                                                               java.lang.Object other){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.Object t1904 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1905 =
                      Main.LogEntry.$RTT.isInstance(t1904);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1906 =
                      !(t1905);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1906) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return false;
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.Object t1907 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1908 =
                      ((Main.LogEntry)x10.rtt.Types.asStruct(Main.LogEntry.$RTT,t1907));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1909 =
                      this.equals$O(((Main.LogEntry)(t1908)));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1909;
                }
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public boolean
                                                                                               equals$O(
                                                                                               Main.LogEntry other){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1911 =
                      this.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1910 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1912 =
                      t1910.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1916 =
                      ((boolean) t1911) ==
                    ((boolean) t1912);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1916) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1914 =
                          this.
                            order;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1913 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1915 =
                          t1913.
                            order;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1916 = ((long) t1914) ==
                        ((long) t1915);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1920 =
                      t1916;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1920) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1918 =
                          this.
                            key;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1917 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1919 =
                          t1917.
                            key;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1920 = ((long) t1918) ==
                        ((long) t1919);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1924 =
                      t1920;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1924) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1922 =
                          this.
                            value;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1921 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1923 =
                          t1921.
                            value;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1924 = ((long) t1922) ==
                        ((long) t1923);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1925 =
                      t1924;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1925;
                }
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public boolean
                                                                                               _struct_equals$O(
                                                                                               java.lang.Object other){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.Object t1926 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1927 =
                      Main.LogEntry.$RTT.isInstance(t1926);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1928 =
                      !(t1927);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1928) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return false;
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.Object t1929 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1930 =
                      ((Main.LogEntry)x10.rtt.Types.asStruct(Main.LogEntry.$RTT,t1929));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1931 =
                      this._struct_equals$O(((Main.LogEntry)(t1930)));
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1931;
                }
                
                
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public boolean
                                                                                               _struct_equals$O(
                                                                                               Main.LogEntry other){
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1933 =
                      this.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1932 =
                      other;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1934 =
                      t1932.
                        direction;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1938 =
                      ((boolean) t1933) ==
                    ((boolean) t1934);
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1938) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1936 =
                          this.
                            order;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1935 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1937 =
                          t1935.
                            order;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1938 = ((long) t1936) ==
                        ((long) t1937);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1942 =
                      t1938;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1942) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1940 =
                          this.
                            key;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1939 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1941 =
                          t1939.
                            key;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1942 = ((long) t1940) ==
                        ((long) t1941);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
boolean t1946 =
                      t1942;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1946) {
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1944 =
                          this.
                            value;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t1943 =
                          other;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1945 =
                          t1943.
                            value;
                        
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1946 = ((long) t1944) ==
                        ((long) t1945);
                    }
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1947 =
                      t1946;
                    
//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1947;
                }
                
                
//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public Main.LogEntry
                                                                                               Main$LogEntry$$this$Main$LogEntry(
                                                                                               ){
                    
//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return Main.LogEntry.this;
                }
                
                
//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public void
                                                                                               __fieldInitializers_Main_LogEntry(
                                                                                               ){
                    
                }
            
        }
        
        
        
//#line 47 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
public static class $Main extends x10.runtime.impl.java.Runtime {
        private static final long serialVersionUID = 1L;
        public static void main(java.lang.String[] args)  {
        // start native runtime
        new $Main().start(args);
        }
        
        // called by native runtime inside main x10 thread
        public void runtimeCallback(final x10.core.Rail<java.lang.String> args)  {
        // call the original app-main method
        Main.main(args);
        }
        }
        
        // the original app-main method
        public static void main(final x10.core.Rail<java.lang.String> args)  {
            
//#line 52 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1948 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("h")),
                                                                                     ((java.lang.String)("help")),
                                                                                     ((java.lang.String)("this information")));
            
//#line 53 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1949 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("c")),
                                                                                     ((java.lang.String)("check")),
                                                                                     ((java.lang.String)("perform correctness check")));
            
//#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.Rail t1955 =
              ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.util.Option> makeRailFromJavaArray(x10.util.Option.$RTT, new x10.util.Option[] {t1948, t1949})));
            
//#line 55 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1950 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("i")),
                                                                                     ((java.lang.String)("insertions")),
                                                                                     ((java.lang.String)("number of insertions per thread")));
            
//#line 56 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1951 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("r")),
                                                                                     ((java.lang.String)("ratio")),
                                                                                     ((java.lang.String)("percentage of get w.r.t. total operations")));
            
//#line 57 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1952 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("t")),
                                                                                     ((java.lang.String)("threads")),
                                                                                     ((java.lang.String)("number of threads")));
            
//#line 58 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1953 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("k")),
                                                                                     ((java.lang.String)("key-limit")),
                                                                                     ((java.lang.String)("maximum value of a key")));
            
//#line 59 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Option t1954 =
              new x10.util.Option((java.lang.System[]) null).x10$util$Option$$init$S(((java.lang.String)("v")),
                                                                                     ((java.lang.String)("value-limit")),
                                                                                     ((java.lang.String)("maximum value of a value")));
            
//#line 54 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.Rail t1956 =
              ((x10.core.Rail)(x10.runtime.impl.java.ArrayUtils.<x10.util.Option> makeRailFromJavaArray(x10.util.Option.$RTT, new x10.util.Option[] {t1950, t1951, t1952, t1953, t1954})));
            
//#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.OptionsParser opts =
              ((x10.util.OptionsParser)(new x10.util.OptionsParser((java.lang.System[]) null).x10$util$OptionsParser$$init$S(((x10.core.Rail)(args)),
                                                                                                                             ((x10.core.Rail)(t1955)),
                                                                                                                             ((x10.core.Rail)(t1956)), (x10.util.OptionsParser.__0$1x10$lang$String$2__1$1x10$util$Option$2__2$1x10$util$Option$2) null)));
            
//#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.Rail t1957 =
              opts.filteredArgs();
            
//#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1958 =
              ((x10.core.Rail<java.lang.String>)t1957).
                size;
            
//#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1968 =
              ((long) t1958) !=
            ((long) 0L);
            
//#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1968) {
                
//#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t1960 =
                  ((x10.io.Printer)(x10.io.Console.get$ERR()));
                
//#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.Rail t1959 =
                  opts.filteredArgs();
                
//#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1961 =
                  (("Unexpected arguments: ") + (t1959));
                
//#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1960.println(((java.lang.Object)(t1961)));
                
//#line 63 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t1962 =
                  ((x10.io.Printer)(x10.io.Console.get$ERR()));
                
//#line 63 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1962.println(((java.lang.Object)("Use -h or --help.")));
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
;
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.lang.Place t2040 =
                  ((x10.lang.Place)(x10.lang.Place.get$FIRST_PLACE()));
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2041 =
                  x10.rtt.Equality.equalsequals((x10.lang.Runtime.home()),(t2040));
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2042 =
                  !(t2041);
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t2042) {
                    
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2043 =
                      true;
                    
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t2043) {
                        
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.lang.FailedDynamicCheckException t2044 =
                          ((x10.lang.FailedDynamicCheckException)(new x10.lang.FailedDynamicCheckException(((java.lang.String)("!(here == x10.lang.Place.FIRST_PLACE)")))));
                        
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
throw t2044;
                    }
                }
                
//#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
x10.runtime.impl.java.Runtime.setExitCode(((int)(1)));
                
//#line 65 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return;
            }
            
//#line 67 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t1971 =
              opts.$apply$O(((java.lang.String)("-h")));
            
//#line 67 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t1971) {
                
//#line 68 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t1969 =
                  ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
//#line 68 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1970 =
                  opts.usage(((java.lang.String)("")));
                
//#line 68 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1969.println(((java.lang.Object)(t1970)));
                
//#line 69 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return;
            }
            
//#line 72 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1972 =
              Main.WORKERS;
            
//#line 72 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long workers =
              opts.$apply$O(((java.lang.String)("-t")),
                            (long)(t1972));
            
//#line 73 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((workers) > (((long)(0L))));
            
//#line 74 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final double t1973 =
              Main.RATIO;
            
//#line 74 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final double ratio =
              opts.$apply$O(((java.lang.String)("-r")),
                            (double)(t1973));
            
//#line 75 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((ratio) > (((double)(0.0)))) &&
            ((ratio) < (((double)(1.0))));
            
//#line 76 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1974 =
              Main.INS_PER_THREAD;
            
//#line 76 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long ins_per_thread =
              opts.$apply$O(((java.lang.String)("-i")),
                            (long)(t1974));
            
//#line 77 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((ins_per_thread) > (((long)(0L))));
            
//#line 78 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean check =
              opts.$apply$O(((java.lang.String)("-c")));
            
//#line 79 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1975 =
              Main.KEY_LIMIT;
            
//#line 79 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long key_limit =
              opts.$apply$O(((java.lang.String)("-k")),
                            (long)(t1975));
            
//#line 80 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((key_limit) > (((long)(0L))));
            
//#line 81 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1976 =
              Main.VALUE_LIMIT;
            
//#line 81 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long value_limit =
              opts.$apply$O(((java.lang.String)("-v")),
                            (long)(t1976));
            
//#line 82 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((value_limit) > (((long)(0L))));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t1981 =
              ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1977 =
              (((x10.core.Long.$box(workers))) + (" Workers\t"));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1978 =
              ((t1977) + ((x10.core.Long.$box(ins_per_thread))));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1979 =
              ((t1978) + (" <key,value> pairs per thread\t"));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1980 =
              ((t1979) + ((x10.core.Double.$box(ratio))));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t1982 =
              ((t1980) + (" ratio of get w.r.t. total number of operations"));
            
//#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t1981.println(((java.lang.Object)(t1982)));
            
//#line 87 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t1983 =
              Main.defaultValue;
            
//#line 87 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Hash h =
              ((Hash)(new Hash((java.lang.System[]) null).Hash$$init$S(((long)(t1983)))));
            
//#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.fun.Fun_0_1 t1985 =
              ((x10.core.fun.Fun_0_1)(new Main.$Closure$0()));
            
//#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.regionarray.Array log =
              ((x10.regionarray.Array)(new x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>>((java.lang.System[]) null, x10.rtt.ParameterizedType.make(x10.util.ArrayList.$RTT, Main.LogEntry.$RTT)).x10$regionarray$Array$$init$S(((long)(workers)),
                                                                                                                                                                                                                                          ((x10.core.fun.Fun_0_1)(t1985)), (x10.regionarray.Array.__1$1x10$lang$Long$3x10$regionarray$Array$$T$2) null)));
            
//#line 91 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long start =
              java.lang.System.currentTimeMillis();
            {
                
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
x10.lang.Runtime.ensureNotInAtomic();
                
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.lang.FinishState x10$__var0 =
                  x10.lang.Runtime.startFinish();
                
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
try {{
                    {
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i1836min1837 =
                          0L;
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i1836max1838 =
                          ((workers) - (((long)(1L))));
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long i2070 =
                          i1836min1837;
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
for (;
                                                                                                          true;
                                                                                                          ) {
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2071 =
                              i2070;
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2072 =
                              ((t2071) <= (((long)(i1836max1838))));
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (!(t2072)) {
                                
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
break;
                            }
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i2067 =
                              i2070;
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
x10.lang.Runtime.runAsync(((x10.core.fun.VoidFun_0_0)(new Main.$Closure$1(ins_per_thread,
                                                                                                                                                                                   key_limit,
                                                                                                                                                                                   ratio,
                                                                                                                                                                                   value_limit,
                                                                                                                                                                                   h,
                                                                                                                                                                                   log,
                                                                                                                                                                                   i2067, (Main.$Closure$1.__5$1x10$util$ArrayList$1Main$LogEntry$2$2) null))));
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2068 =
                              i2070;
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2069 =
                              ((t2068) + (((long)(1L))));
                            
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
i2070 = t2069;
                        }
                    }
                }}catch (java.lang.Throwable __lowerer__var__0__) {
                    
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
x10.lang.Runtime.pushException(((java.lang.Throwable)(__lowerer__var__0__)));
                    
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
throw new java.lang.RuntimeException();
                }finally {{
                     
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
x10.lang.Runtime.stopFinish(((x10.lang.FinishState)(x10$__var0)));
                 }}
                }
            
//#line 117 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long end =
              java.lang.System.currentTimeMillis();
            
//#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t2008 =
              ((x10.io.Printer)(x10.io.Console.get$OUT()));
            
//#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2006 =
              ((end) - (((long)(start))));
            
//#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t2007 =
              (("\nIt took: ") + ((x10.core.Long.$box(t2006))));
            
//#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final java.lang.String t2009 =
              ((t2007) + ("ms"));
            
//#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t2008.println(((java.lang.Object)(t2009)));
            
//#line 122 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (check) {
                
//#line 123 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t2010 =
                  ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
//#line 123 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t2010.print(((java.lang.String)("Checking Correctness.....")));
                
//#line 124 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.HashMap ch =
                  ((x10.util.HashMap)(new x10.util.HashMap<x10.core.Long, x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG, x10.rtt.Types.LONG).x10$util$HashMap$$init$S()));
                
//#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.core.fun.Fun_0_1 t2011 =
                  ((x10.core.fun.Fun_0_1)(new Main.$Closure$2()));
                
//#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.regionarray.Array indexes =
                  ((x10.regionarray.Array)(new x10.regionarray.Array<x10.core.Long>((java.lang.System[]) null, x10.rtt.Types.LONG).x10$regionarray$Array$$init$S(((long)(workers)),
                                                                                                                                                                 ((x10.core.fun.Fun_0_1)(t2011)), (x10.regionarray.Array.__1$1x10$lang$Long$3x10$regionarray$Array$$T$2) null)));
                
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i1852min2104 =
                  0L;
                
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2105 =
                  ((workers) * (((long)(ins_per_thread))));
                
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i1852max2106 =
                  ((t2105) - (((long)(1L))));
                
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long i2101 =
                  i1852min2104;
                
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
for (;
                                                                                                   true;
                                                                                                   ) {
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2102 =
                      i2101;
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2103 =
                      ((t2102) <= (((long)(i1852max2106))));
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (!(t2103)) {
                        
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
break;
                    }
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long i2098 =
                      i2101;
                    
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long j2095 =
                      0L;
                    
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
for (;
                                                                                                       true;
                                                                                                       ) {
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2096 =
                          j2095;
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2097 =
                          ((t2096) < (((long)(workers))));
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (!(t2097)) {
                            
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
break;
                        }
                        
//#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2073 =
                          j2095;
                        
//#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.ArrayList t2074 =
                          ((x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>>)log).$apply$G((long)(t2073));
                        
//#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2075 =
                          ((x10.util.ArrayList<Main.LogEntry>)t2074).isEmpty$O();
                        
//#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2076 =
                          !(t2075);
                        
//#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t2076) {
                            
//#line 130 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2077 =
                              j2095;
                            
//#line 130 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.ArrayList t2078 =
                              ((x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>>)log).$apply$G((long)(t2077));
                            
//#line 130 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry v2079 =
                              ((x10.util.ArrayList<Main.LogEntry>)t2078).getFirst$G();
                            
//#line 131 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2080 =
                              v2079.
                                order;
                            
//#line 131 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2081 =
                              ((long) t2080) ==
                            ((long) i2098);
                            
//#line 131 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t2081) {
                                
//#line 132 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2082 =
                                  j2095;
                                
//#line 132 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.ArrayList t2083 =
                                  ((x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>>)log).$apply$G((long)(t2082));
                                
//#line 132 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
((x10.util.ArrayList<Main.LogEntry>)t2083).removeFirst$G();
                                
//#line 133 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2084 =
                                  v2079.
                                    direction;
                                
//#line 133 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (t2084) {
                                    
//#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2085 =
                                      v2079.
                                        key;
                                    
//#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2086 =
                                      v2079.
                                        value;
                                    
//#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
((x10.util.HashMap<x10.core.Long, x10.core.Long>)ch).put__0x10$util$HashMap$$K__1x10$util$HashMap$$V(x10.core.Long.$box(t2085),
                                                                                                                                                                                                                       x10.core.Long.$box(t2086));
                                } else {
                                    
//#line 136 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2087 =
                                      v2079.
                                        key;
                                    
//#line 136 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Box boxedValue2088 =
                                      ((x10.util.Box<x10.core.Long>)
                                        ((x10.util.HashMap<x10.core.Long, x10.core.Long>)ch).get__0x10$util$HashMap$$K(x10.core.Long.$box(t2087)));
                                    
//#line 137 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long value2089 =
                                       0;
                                    
//#line 138 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
try {{
                                        
//#line 139 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2090 =
                                          x10.core.Long.$unbox(((x10.util.Box<x10.core.Long>)boxedValue2088).$apply$G());
                                        
//#line 139 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
value2089 = t2090;
                                    }}catch (final java.lang.RuntimeException id$2091) {
                                        
//#line 141 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2092 =
                                          Main.defaultValue;
                                        
//#line 141 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
value2089 = t2092;
                                    }
                                    
//#line 143 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
assert ((long) value2089) ==
                                    ((long) v2079.
                                              value);
                                }
                            }
                        }
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2093 =
                          j2095;
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2094 =
                          ((t2093) + (((long)(1L))));
                        
//#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
j2095 = t2094;
                    }
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2099 =
                      i2101;
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2100 =
                      ((t2099) + (((long)(1L))));
                    
//#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
i2101 = t2100;
                }
                
//#line 149 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.io.Printer t2039 =
                  ((x10.io.Printer)(x10.io.Console.get$OUT()));
                
//#line 149 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
t2039.println(((java.lang.Object)("OK")));
            }
            }
        
        
//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public Main
                                                                                       Main$$this$Main(
                                                                                       ){
            
//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return Main.this;
        }
        
        
//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
// creation method for java code (1-phase java constructor)
        public Main(){this((java.lang.System[]) null);
                          Main$$init$S();}
        
        // constructor for non-virtual call
        final public Main Main$$init$S() { {
                                                  
//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
;
                                                  
//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"

                                                  
//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
this.__fieldInitializers_Main();
                                              }
                                              return this;
                                              }
        
        
        
//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final public void
                                                                                       __fieldInitializers_Main(
                                                                                       ){
            
        }
        
        @x10.runtime.impl.java.X10Generated final public static class $Closure$0 extends x10.core.Ref implements x10.core.fun.Fun_0_1, x10.serialization.X10JavaSerializable
        {
            private static final long serialVersionUID = 1L;
            public static final x10.rtt.RuntimeType<$Closure$0> $RTT = x10.rtt.StaticFunType.<$Closure$0> make(
            $Closure$0.class, new x10.rtt.Type[] {x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_1.$RTT, x10.rtt.Types.LONG, x10.rtt.ParameterizedType.make(x10.util.ArrayList.$RTT, Main.LogEntry.$RTT))}
            );
            public x10.rtt.RuntimeType<?> $getRTT() {return $RTT;}
            
            public x10.rtt.Type<?> $getParam(int i) {return null;}
            private void writeObject(java.io.ObjectOutputStream oos) throws java.io.IOException { if (x10.runtime.impl.java.Runtime.TRACE_SER) { java.lang.System.out.println("Serializer: writeObject(ObjectOutputStream) of " + this + " calling"); } oos.defaultWriteObject(); }
            public static x10.serialization.X10JavaSerializable $_deserialize_body(Main.$Closure$0 $_obj , x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$0.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                Main.$Closure$0 $_obj = new Main.$Closure$0((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
                
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
                
            }
            
            // constructor just for allocation
            public $Closure$0(final java.lang.System[] $dummy) { 
            }
            // dispatcher for method abstract public (Z1)=>U.operator()(a1:Z1):U
            public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1) {
            return $apply(x10.core.Long.$unbox(a1));
            }
            
                
                public x10.util.ArrayList
                  $apply(
                  final long id$0){
                    
//#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.ArrayList t1984 =
                      ((x10.util.ArrayList)(new x10.util.ArrayList<Main.LogEntry>((java.lang.System[]) null, Main.LogEntry.$RTT).x10$util$ArrayList$$init$S()));
                    
//#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return t1984;
                }
                
                public $Closure$0() { {
                                             
                                         }}
                
            }
            
        @x10.runtime.impl.java.X10Generated final public static class $Closure$1 extends x10.core.Ref implements x10.core.fun.VoidFun_0_0, x10.serialization.X10JavaSerializable
        {
            private static final long serialVersionUID = 1L;
            public static final x10.rtt.RuntimeType<$Closure$1> $RTT = x10.rtt.StaticVoidFunType.<$Closure$1> make(
            $Closure$1.class, new x10.rtt.Type[] {x10.core.fun.VoidFun_0_0.$RTT}
            );
            public x10.rtt.RuntimeType<?> $getRTT() {return $RTT;}
            
            public x10.rtt.Type<?> $getParam(int i) {return null;}
            private void writeObject(java.io.ObjectOutputStream oos) throws java.io.IOException { if (x10.runtime.impl.java.Runtime.TRACE_SER) { java.lang.System.out.println("Serializer: writeObject(ObjectOutputStream) of " + this + " calling"); } oos.defaultWriteObject(); }
            public static x10.serialization.X10JavaSerializable $_deserialize_body(Main.$Closure$1 $_obj , x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$1.class + " calling"); } 
                $_obj.ins_per_thread = $deserializer.readLong();
                $_obj.key_limit = $deserializer.readLong();
                $_obj.ratio = $deserializer.readDouble();
                $_obj.value_limit = $deserializer.readLong();
                $_obj.h = $deserializer.readRef();
                $_obj.log = $deserializer.readRef();
                $_obj.i2067 = $deserializer.readLong();
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                Main.$Closure$1 $_obj = new Main.$Closure$1((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
                
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
                $serializer.write(this.ins_per_thread);
                $serializer.write(this.key_limit);
                $serializer.write(this.ratio);
                $serializer.write(this.value_limit);
                if (h instanceof x10.serialization.X10JavaSerializable) {
                $serializer.write((x10.serialization.X10JavaSerializable) this.h);
                } else {
                $serializer.write(this.h);
                }
                if (log instanceof x10.serialization.X10JavaSerializable) {
                $serializer.write((x10.serialization.X10JavaSerializable) this.log);
                } else {
                $serializer.write(this.log);
                }
                $serializer.write(this.i2067);
                
            }
            
            // constructor just for allocation
            public $Closure$1(final java.lang.System[] $dummy) { 
            }
            
                
                public void
                  $apply(
                  ){
                    
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
try {{
                        
//#line 94 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2065 =
                          x10.lang.System.nanoTime$O();
                        
//#line 94 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Random rand2066 =
                          ((x10.util.Random)(new x10.util.Random((java.lang.System[]) null).x10$util$Random$$init$S(t2065)));
                        
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long j2062 =
                          0L;
                        
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
for (;
                                                                                                          true;
                                                                                                          ) {
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2063 =
                              j2062;
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean t2064 =
                              ((t2063) < (((long)(this.
                                                    ins_per_thread))));
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (!(t2064)) {
                                
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
break;
                            }
                            
//#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final double d2045 =
                              rand2066.nextDouble$O();
                            
//#line 98 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long key2046 =
                              rand2066.nextLong$O((long)(this.
                                                           key_limit));
                            
//#line 99 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long value2047 =
                              0L;
                            
//#line 100 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
long order2048 =
                              0L;
                            
//#line 102 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final boolean direction2049 =
                              ((d2045) >= (((double)(this.
                                                       ratio))));
                            
//#line 103 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
if (direction2049) {
                                
//#line 104 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2050 =
                                  rand2066.nextLong$O((long)(this.
                                                               value_limit));
                                
//#line 104 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
value2047 = t2050;
                                
//#line 105 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2051 =
                                  value2047;
                                
//#line 105 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2052 =
                                  this.
                                    h.put$O((long)(key2046),
                                            (long)(t2051));
                                
//#line 105 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
order2048 = t2052;
                            } else {
                                
//#line 109 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.Pair orderValue2053 =
                                  this.
                                    h.get((long)(key2046));
                                
//#line 110 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2054 =
                                  x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)orderValue2053).
                                                                              first));
                                
//#line 110 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
order2048 = t2054;
                                
//#line 111 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2055 =
                                  x10.core.Long.$unbox(x10.core.Long.$unbox(((x10.util.Pair<x10.core.Long, x10.core.Long>)orderValue2053).
                                                                              second));
                                
//#line 111 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
value2047 = t2055;
                            }
                            
//#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final x10.util.ArrayList t2056 =
                              ((x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>>)this.
                                                                                           log).$apply$G((long)(this.
                                                                                                                  i2067));
                            
//#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2057 =
                              order2048;
                            
//#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2058 =
                              value2047;
                            
//#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final Main.LogEntry t2059 =
                              new Main.LogEntry((java.lang.System[]) null).Main$LogEntry$$init$S(((boolean)(direction2049)),
                                                                                                 t2057,
                                                                                                 ((long)(key2046)),
                                                                                                 t2058);
                            
//#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
((x10.util.ArrayList<Main.LogEntry>)t2056).add__0x10$util$ArrayList$$T$O(((Main.LogEntry)(t2059)));
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2060 =
                              j2062;
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
final long t2061 =
                              ((t2060) + (((long)(1L))));
                            
//#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
j2062 = t2061;
                        }
                    }}catch (java.lang.Error __lowerer__var__0__) {
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
throw __lowerer__var__0__;
                    }catch (java.lang.Throwable __lowerer__var__1__) {
                        
//#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
throw x10.rtt.Types.EXCEPTION.isInstance(__lowerer__var__1__) ? (java.lang.RuntimeException)(__lowerer__var__1__) : new x10.lang.WrappedThrowable(__lowerer__var__1__);
                    }
                }
                
                public long ins_per_thread;
                public long key_limit;
                public double ratio;
                public long value_limit;
                public Hash h;
                public x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>> log;
                public long i2067;
                
                public $Closure$1(final long ins_per_thread,
                                  final long key_limit,
                                  final double ratio,
                                  final long value_limit,
                                  final Hash h,
                                  final x10.regionarray.Array<x10.util.ArrayList<Main.LogEntry>> log,
                                  final long i2067, __5$1x10$util$ArrayList$1Main$LogEntry$2$2 $dummy) { {
                                                                                                                this.ins_per_thread = ins_per_thread;
                                                                                                                this.key_limit = key_limit;
                                                                                                                this.ratio = ratio;
                                                                                                                this.value_limit = value_limit;
                                                                                                                this.h = ((Hash)(h));
                                                                                                                this.log = ((x10.regionarray.Array)(log));
                                                                                                                this.i2067 = i2067;
                                                                                                            }}
                // synthetic type for parameter mangling
                public static final class __5$1x10$util$ArrayList$1Main$LogEntry$2$2 {}
                
            }
            
        @x10.runtime.impl.java.X10Generated final public static class $Closure$2 extends x10.core.Ref implements x10.core.fun.Fun_0_1, x10.serialization.X10JavaSerializable
        {
            private static final long serialVersionUID = 1L;
            public static final x10.rtt.RuntimeType<$Closure$2> $RTT = x10.rtt.StaticFunType.<$Closure$2> make(
            $Closure$2.class, new x10.rtt.Type[] {x10.rtt.ParameterizedType.make(x10.core.fun.Fun_0_1.$RTT, x10.rtt.Types.LONG, x10.rtt.Types.LONG)}
            );
            public x10.rtt.RuntimeType<?> $getRTT() {return $RTT;}
            
            public x10.rtt.Type<?> $getParam(int i) {return null;}
            private void writeObject(java.io.ObjectOutputStream oos) throws java.io.IOException { if (x10.runtime.impl.java.Runtime.TRACE_SER) { java.lang.System.out.println("Serializer: writeObject(ObjectOutputStream) of " + this + " calling"); } oos.defaultWriteObject(); }
            public static x10.serialization.X10JavaSerializable $_deserialize_body(Main.$Closure$2 $_obj , x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + $Closure$2.class + " calling"); } 
                return $_obj;
            }
            
            public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
            
                Main.$Closure$2 $_obj = new Main.$Closure$2((java.lang.System[]) null);
                $deserializer.record_reference($_obj);
                return $_deserialize_body($_obj, $deserializer);
                
            }
            
            public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
            
                
            }
            
            // constructor just for allocation
            public $Closure$2(final java.lang.System[] $dummy) { 
            }
            // dispatcher for method abstract public (Z1)=>U.operator()(a1:Z1):U
            public java.lang.Object $apply(final java.lang.Object a1, final x10.rtt.Type t1) {
            return x10.core.Long.$box($apply$O(x10.core.Long.$unbox(a1)));
            }
            // dispatcher for method abstract public (Z1)=>U.operator()(a1:Z1):U
            public long $apply$J(final java.lang.Object a1, final x10.rtt.Type t1) {
            return $apply$O(x10.core.Long.$unbox(a1));
            }
            
                
                public long
                  $apply$O(
                  final long id$1){
                    
//#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10"
return 0L;
                }
                
                public $Closure$2() { {
                                             
                                         }}
                
            }
            
        
        }
        
        