/*************************************************/
/* START of Main */
#include <Main.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/util/OptionsParser.h>
#include <x10/util/Option.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/System.h>
#include <Hash.h>
#include <x10/regionarray/Array.h>
#include <x10/util/ArrayList.h>
#include <Main__LogEntry.h>
#include <x10/regionarray/RectRegion1D.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/Timer.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/Random.h>
#include <x10/util/Pair.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/util/HashMap.h>
#include <x10/util/Box.h>
#include <x10/lang/AssertionError.h>
#ifndef MAIN__CLOSURE__1_CLOSURE
#define MAIN__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Main__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Main__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
        try {
            
            //#line 94 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
            x10::util::Random* rand19930 =  ((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
            ;
            
            //#line 94 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
            (rand19930)->::x10::util::Random::_constructor(x10::lang::RuntimeNatives::nanoTime());
            
            //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
            {
                x10_long j19931;
                for (
                     //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                     j19931 = ((x10_long)0ll); ((j19931) < (ins_per_thread));
                     
                     //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                     j19931 = ((x10_long) ((j19931) + (((x10_long)1ll)))))
                {
                    
                    //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_double d19932 = rand19930->nextDouble();
                    
                    //#line 98 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long key19933 = rand19930->nextLong(key_limit);
                    
                    //#line 99 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long value19934 = ((x10_long)0ll);
                    
                    //#line 100 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long order19935 = ((x10_long)0ll);
                    
                    //#line 102 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_boolean direction19936 = ((d19932) >= (ratio));
                    
                    //#line 103 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                    if (direction19936) {
                        
                        //#line 104 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value19934 = rand19930->nextLong(value_limit);
                        
                        //#line 105 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order19935 = h->put(key19933, value19934);
                    } else {
                        
                        //#line 109 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                        x10::util::Pair<x10_long, x10_long> orderValue19937 =
                          h->get(key19933);
                        
                        //#line 110 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order19935 = orderValue19937->FMGL(first);
                        
                        //#line 111 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value19934 = orderValue19937->FMGL(second);
                    }
                    
                    //#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 443 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long i19938 = i19943;
                        
                        //#line 442 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                        x10::util::ArrayList<Main__LogEntry>* ret19939;
                        
                        //#line 446 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret19939 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                     i19938);
                        ret19939;
                    }))
                    )->add((__extension__ ({
                               
                               //#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                               Main__LogEntry alloc19940 =  Main__LogEntry::_alloc();
                               
                               //#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
                               (alloc19940)->::Main__LogEntry::_constructor(
                                 direction19936, order19935, key19933,
                                 value19934);
                               alloc19940;
                           }))
                           );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc9) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc9)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc9);
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc9);
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long ins_per_thread;
    x10_long key_limit;
    x10_double ratio;
    x10_long value_limit;
    Hash* h;
    x10_long i19943;
    x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ins_per_thread);
        buf.write(this->key_limit);
        buf.write(this->ratio);
        buf.write(this->value_limit);
        buf.write(this->h);
        buf.write(this->i19943);
        buf.write(this->log);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Main__closure__1* storage = x10aux::alloc<Main__closure__1>();
        buf.record_reference(storage);
        x10_long that_ins_per_thread = buf.read<x10_long>();
        x10_long that_key_limit = buf.read<x10_long>();
        x10_double that_ratio = buf.read<x10_double>();
        x10_long that_value_limit = buf.read<x10_long>();
        Hash* that_h = buf.read<Hash*>();
        x10_long that_i19943 = buf.read<x10_long>();
        x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* that_log = buf.read<x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>*>();
        Main__closure__1* this_ = new (storage) Main__closure__1(that_ins_per_thread, that_key_limit, that_ratio, that_value_limit, that_h, that_i19943, that_log);
        return this_;
    }
    
    Main__closure__1(x10_long ins_per_thread, x10_long key_limit, x10_double ratio, x10_long value_limit, Hash* h, x10_long i19943, x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log) : ins_per_thread(ins_per_thread), key_limit(key_limit), ratio(ratio), value_limit(value_limit), h(h), i19943(i19943), log(log) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10:93-116";
    }

};

#endif // MAIN__CLOSURE__1_CLOSURE

//#line 22 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_long Main::FMGL(WORKERS);
void Main::FMGL(WORKERS__do_init)() {
    FMGL(WORKERS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.WORKERS");
    x10_long __var0__ = x10aux::class_cast_unchecked<x10_long>(((x10_long)8ll));
    FMGL(WORKERS) = __var0__;
    FMGL(WORKERS__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(WORKERS__init)() {
    x10aux::StaticInitController::initField(&FMGL(WORKERS__status), &FMGL(WORKERS__do_init), &FMGL(WORKERS__exception), "Main.WORKERS");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(WORKERS__status);
x10::lang::CheckedThrowable* Main::FMGL(WORKERS__exception);

//#line 23 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_long Main::FMGL(INS_PER_THREAD);
void Main::FMGL(INS_PER_THREAD__do_init)() {
    FMGL(INS_PER_THREAD__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.INS_PER_THREAD");
    x10_long __var1__ = x10aux::class_cast_unchecked<x10_long>(((x10_long)1000ll));
    FMGL(INS_PER_THREAD) = __var1__;
    FMGL(INS_PER_THREAD__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(INS_PER_THREAD__init)() {
    x10aux::StaticInitController::initField(&FMGL(INS_PER_THREAD__status), &FMGL(INS_PER_THREAD__do_init), &FMGL(INS_PER_THREAD__exception), "Main.INS_PER_THREAD");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(INS_PER_THREAD__status);
x10::lang::CheckedThrowable* Main::FMGL(INS_PER_THREAD__exception);

//#line 24 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_long Main::FMGL(KEY_LIMIT);
void Main::FMGL(KEY_LIMIT__do_init)() {
    FMGL(KEY_LIMIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.KEY_LIMIT");
    x10_long __var2__ = x10aux::class_cast_unchecked<x10_long>(((x10_long)100ll));
    FMGL(KEY_LIMIT) = __var2__;
    FMGL(KEY_LIMIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(KEY_LIMIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(KEY_LIMIT__status), &FMGL(KEY_LIMIT__do_init), &FMGL(KEY_LIMIT__exception), "Main.KEY_LIMIT");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(KEY_LIMIT__status);
x10::lang::CheckedThrowable* Main::FMGL(KEY_LIMIT__exception);

//#line 25 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_long Main::FMGL(VALUE_LIMIT);
void Main::FMGL(VALUE_LIMIT__do_init)() {
    FMGL(VALUE_LIMIT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.VALUE_LIMIT");
    x10_long __var3__ = x10aux::class_cast_unchecked<x10_long>(((x10_long)100ll));
    FMGL(VALUE_LIMIT) = __var3__;
    FMGL(VALUE_LIMIT__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(VALUE_LIMIT__init)() {
    x10aux::StaticInitController::initField(&FMGL(VALUE_LIMIT__status), &FMGL(VALUE_LIMIT__do_init), &FMGL(VALUE_LIMIT__exception), "Main.VALUE_LIMIT");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(VALUE_LIMIT__status);
x10::lang::CheckedThrowable* Main::FMGL(VALUE_LIMIT__exception);

//#line 26 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_long Main::FMGL(defaultValue);
void Main::FMGL(defaultValue__do_init)() {
    FMGL(defaultValue__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.defaultValue");
    x10_long __var4__ = x10aux::class_cast_unchecked<x10_long>(((x10_long)0ll));
    FMGL(defaultValue) = __var4__;
    FMGL(defaultValue__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(defaultValue__init)() {
    x10aux::StaticInitController::initField(&FMGL(defaultValue__status), &FMGL(defaultValue__do_init), &FMGL(defaultValue__exception), "Main.defaultValue");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(defaultValue__status);
x10::lang::CheckedThrowable* Main::FMGL(defaultValue__exception);

//#line 27 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c
x10_double Main::FMGL(RATIO);
void Main::FMGL(RATIO__do_init)() {
    FMGL(RATIO__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: Main.RATIO");
    x10_double __var5__ = x10aux::class_cast_unchecked<x10_double>(0.8);
    FMGL(RATIO) = __var5__;
    FMGL(RATIO__status) = x10aux::StaticInitController::INITIALIZED;
}
void Main::FMGL(RATIO__init)() {
    x10aux::StaticInitController::initField(&FMGL(RATIO__status), &FMGL(RATIO__do_init), &FMGL(RATIO__exception), "Main.RATIO");
    
}
volatile x10aux::StaticInitController::status Main::FMGL(RATIO__status);
x10::lang::CheckedThrowable* Main::FMGL(RATIO__exception);

//#line 47 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
void Main::main(x10::lang::Rail<x10::lang::String* >* args) {
    
    //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10::util::OptionsParser* opts =  ((new (memset(x10aux::alloc<x10::util::OptionsParser>(), 0, sizeof(x10::util::OptionsParser))) x10::util::OptionsParser()))
    ;
    
    //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
    (opts)->::x10::util::OptionsParser::_constructor(args, (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                         x10::lang::Rail<x10::util::Option >* __var7__(x10::lang::Rail<x10::util::Option>::_make(2));
                                                         __var7__->__set(0, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 52 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2554 =
                                                                 x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19902 =
                                                                x10aux::makeStringLit("h");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19903 =
                                                                x10aux::makeStringLit("help");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19904 =
                                                                x10aux::makeStringLit("this information");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2554)->::x10::util::Option::_constructor(
                                                                s19902,
                                                                l19903,
                                                                d19904,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2554;
                                                          }))
                                                          ));
                                                         __var7__->__set(1, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 53 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2555 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19905 =
                                                                x10aux::makeStringLit("c");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19906 =
                                                                x10aux::makeStringLit("check");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19907 =
                                                                x10aux::makeStringLit("perform correctness check");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2555)->::x10::util::Option::_constructor(
                                                                s19905,
                                                                l19906,
                                                                d19907,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2555;
                                                          }))
                                                          ));
                                                         __var7__;
                                                     })),
                                                     (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                         x10::lang::Rail<x10::util::Option >* __var8__(x10::lang::Rail<x10::util::Option>::_make(5));
                                                         __var8__->__set(0, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 55 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2556 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19908 =
                                                                x10aux::makeStringLit("i");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19909 =
                                                                x10aux::makeStringLit("insertions");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19910 =
                                                                x10aux::makeStringLit("number of insertions per thread");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2556)->::x10::util::Option::_constructor(
                                                                s19908,
                                                                l19909,
                                                                d19910,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2556;
                                                          }))
                                                          ));
                                                         __var8__->__set(1, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 56 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2557 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19911 =
                                                                x10aux::makeStringLit("r");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19912 =
                                                                x10aux::makeStringLit("ratio");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19913 =
                                                                x10aux::makeStringLit("percentage of get w.r.t. total operations");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2557)->::x10::util::Option::_constructor(
                                                                s19911,
                                                                l19912,
                                                                d19913,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2557;
                                                          }))
                                                          ));
                                                         __var8__->__set(2, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 57 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2558 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19914 =
                                                                x10aux::makeStringLit("t");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19915 =
                                                                x10aux::makeStringLit("threads");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19916 =
                                                                x10aux::makeStringLit("number of threads");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2558)->::x10::util::Option::_constructor(
                                                                s19914,
                                                                l19915,
                                                                d19916,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2558;
                                                          }))
                                                          ));
                                                         __var8__->__set(3, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 58 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2559 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19917 =
                                                                x10aux::makeStringLit("k");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19918 =
                                                                x10aux::makeStringLit("key-limit");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19919 =
                                                                x10aux::makeStringLit("maximum value of a key");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2559)->::x10::util::Option::_constructor(
                                                                s19917,
                                                                l19918,
                                                                d19919,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2559;
                                                          }))
                                                          ));
                                                         __var8__->__set(4, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 59 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2560 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19920 =
                                                                x10aux::makeStringLit("v");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19921 =
                                                                x10aux::makeStringLit("value-limit");
                                                              
                                                              //#line 94 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19922 =
                                                                x10aux::makeStringLit("maximum value of a value");
                                                              
                                                              //#line 95 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2560)->::x10::util::Option::_constructor(
                                                                s19920,
                                                                l19921,
                                                                d19922,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2560;
                                                          }))
                                                          ));
                                                         __var8__;
                                                     })));
    
    //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals((x10_long)(x10aux::nullCheck(opts->filteredArgs())->FMGL(size)),
                                ((x10_long)0ll)))) {
        
        //#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Unexpected arguments: "), opts->filteredArgs())));
        
        //#line 63 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Use -h or --help.")));
        
        //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
        if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                     x10::lang::Place::FMGL(FIRST_PLACE__get)()))))
        {
            
            //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x10.lang.Place.FIRST_PLACE)"))));
            }
            
        }
        
        //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        (x10aux::exitCode = (((x10_int)1)));
        
        //#line 65 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 67 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
    if (opts->x10::util::OptionsParser::__apply(x10aux::makeStringLit("-h")))
    {
        
        //#line 68 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(opts->usage(x10aux::makeStringLit(""))));
        
        //#line 69 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 72 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long workers = opts->x10::util::OptionsParser::__apply(
                         x10aux::makeStringLit("-t"), ((x10_long)8ll));
    
    //#line 73 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((workers) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 74 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_double ratio = opts->x10::util::OptionsParser::__apply(
                         x10aux::makeStringLit("-r"), 0.8);
    
    //#line 75 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((ratio) > (0.0)) && ((ratio) < (1.0)));
    #endif//NO_ASSERTIONS
    
    //#line 76 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long ins_per_thread = opts->x10::util::OptionsParser::__apply(
                                x10aux::makeStringLit("-i"),
                                ((x10_long)1000ll));
    
    //#line 77 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((ins_per_thread) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 78 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_boolean check = opts->x10::util::OptionsParser::__apply(
                          x10aux::makeStringLit("-c"));
    
    //#line 79 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long key_limit = opts->x10::util::OptionsParser::__apply(
                           x10aux::makeStringLit("-k"), ((x10_long)100ll));
    
    //#line 80 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((key_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 81 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long value_limit = opts->x10::util::OptionsParser::__apply(
                             x10aux::makeStringLit("-v"),
                             ((x10_long)100ll));
    
    //#line 82 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((value_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(workers, x10aux::makeStringLit(" Workers\t")), ins_per_thread), x10aux::makeStringLit(" <key,value> pairs per thread\t")), ratio), x10aux::makeStringLit(" ratio of get w.r.t. total number of operations"))));
    
    //#line 87 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    Hash* h =  ((new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash()))
    ;
    
    //#line 87 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
    (h)->::Hash::_constructor(((x10_long)0ll));
    
    //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log =
       ((new (memset(x10aux::alloc<x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*> >(), 0, sizeof(x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>))) x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>()))
    ;
    
    //#line 312 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10_long size19966 = workers;
    
    //#line 314 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10::regionarray::RectRegion1D* myReg19928 =  ((new (memset(x10aux::alloc<x10::regionarray::RectRegion1D>(), 0, sizeof(x10::regionarray::RectRegion1D))) x10::regionarray::RectRegion1D()))
    ;
    
    //#line 314 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg19928)->::x10::regionarray::RectRegion1D::_constructor(
      ((x10_long) ((size19966) - (((x10_long)1ll)))));
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(region) = reinterpret_cast<x10::regionarray::Region*>(myReg19928);
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rank) = ((x10_long)1ll);
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rect) = true;
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(zeroBased) = true;
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rail) = true;
    
    //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(size) = size19966;
    
    //#line 317 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(layout_min0) = log->FMGL(layout_stride1) = log->
                                                           FMGL(layout_min1) =
      ((x10_long)0ll);
    
    //#line 318 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(layout) = (x10aux::class_cast_unchecked<x10::lang::Rail<x10_long >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 319 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >* r19929 =
      x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::_makeUnsafe(size19966, false);
    
    //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10_long i16510max19925 = ((x10_long) ((size19966) - (((x10_long)1ll))));
    
    //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": polyglot.ast.For_c
    {
        x10_long i19926;
        for (
             //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
             i19926 = ((x10_long)0ll); ((i19926) <= (i16510max19925));
             
             //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i19926 = ((x10_long) ((i19926) + (((x10_long)1ll)))))
        {
            
            //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
            x10_long i19927 = i19926;
            
            //#line 321 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10Call_c
            r19929->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__set(
              i19927, (__extension__ ({
                  
                  //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                  x10_long id__19923 = i19927;
                  (__extension__ ({
                      
                      //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                      x10::util::ArrayList<Main__LogEntry>* alloc19924 =
                         ((new (memset(x10aux::alloc<x10::util::ArrayList<Main__LogEntry> >(), 0, sizeof(x10::util::ArrayList<Main__LogEntry>))) x10::util::ArrayList<Main__LogEntry>()))
                      ;
                      
                      //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
                      (alloc19924)->::x10::util::ArrayList<Main__LogEntry>::_constructor();
                      alloc19924;
                  }))
                  ;
              }))
              );
        }
    }
    
    //#line 323 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(raw) = r19929;
    
    //#line 91 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long start = x10::lang::RuntimeNatives::currentTimeMillis();
    {
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
        {
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable19972 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
            try {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                        x10_long i2583max19941 = ((x10_long) ((workers) - (((x10_long)1ll))));
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
                        {
                            x10_long i19942;
                            for (
                                 //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                 i19942 = ((x10_long)0ll);
                                 ((i19942) <= (i2583max19941));
                                 
                                 //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                 i19942 = ((x10_long) ((i19942) + (((x10_long)1ll)))))
                            {
                                
                                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                x10_long i19943 = i19942;
                                
                                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Main__closure__1)))Main__closure__1(ins_per_thread, key_limit, ratio, value_limit, h, i19943, log))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc10) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc10);
                        {
                            
                            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc11) {
                if (true) {
                    x10::lang::CheckedThrowable* formal19973 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc11);
                    {
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable19972 = formal19973;
                    }
                } else
                throw;
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable19972)))
            {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable19972))
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable19972));
                }
                
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var0);
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable19972)))
            {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable19972)))
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable19972));
                }
                
            }
            
        }
    }
    
    //#line 117 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long end = x10::lang::RuntimeNatives::currentTimeMillis();
    
    //#line 118 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("\nIt took: "), ((x10_long) ((end) - (start)))), x10aux::makeStringLit("ms"))));
    
    //#line 122 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
    if (check) {
        
        //#line 123 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->print(x10aux::makeStringLit("Checking Correctness....."));
        
        //#line 124 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_long, x10_long>* ch =  ((new (memset(x10aux::alloc<x10::util::HashMap<x10_long, x10_long> >(), 0, sizeof(x10::util::HashMap<x10_long, x10_long>))) x10::util::HashMap<x10_long, x10_long>()))
        ;
        
        //#line 124 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorCall_c
        (ch)->::x10::util::HashMap<x10_long, x10_long>::_constructor();
        
        //#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10::regionarray::Array<x10_long>* indexes =  ((new (memset(x10aux::alloc<x10::regionarray::Array<x10_long> >(), 0, sizeof(x10::regionarray::Array<x10_long>))) x10::regionarray::Array<x10_long>()))
        ;
        
        //#line 312 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10_long size19962 = workers;
        
        //#line 314 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10::regionarray::RectRegion1D* myReg19948 =  ((new (memset(x10aux::alloc<x10::regionarray::RectRegion1D>(), 0, sizeof(x10::regionarray::RectRegion1D))) x10::regionarray::RectRegion1D()))
        ;
        
        //#line 314 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg19948)->::x10::regionarray::RectRegion1D::_constructor(
          ((x10_long) ((size19962) - (((x10_long)1ll)))));
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(region) = reinterpret_cast<x10::regionarray::Region*>(myReg19948);
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rank) = ((x10_long)1ll);
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rect) = true;
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(zeroBased) = true;
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rail) = true;
        
        //#line 315 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(size) = size19962;
        
        //#line 317 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(layout_min0) = indexes->FMGL(layout_stride1) =
          indexes->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(layout) = (x10aux::class_cast_unchecked<x10::lang::Rail<x10_long >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Rail<x10_long >* r19949 = x10::lang::Rail<x10_long >::_makeUnsafe(size19962, false);
        
        //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10_long i16510max19945 = ((x10_long) ((size19962) - (((x10_long)1ll))));
        
        //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": polyglot.ast.For_c
        {
            x10_long i19946;
            for (
                 //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                 i19946 = ((x10_long)0ll); ((i19946) <= (i16510max19945));
                 
                 //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i19946 = ((x10_long) ((i19946) + (((x10_long)1ll)))))
            {
                
                //#line 320 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                x10_long i19947 = i19946;
                
                //#line 321 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10Call_c
                r19949->x10::lang::Rail<x10_long >::__set(
                  i19947, (__extension__ ({
                      
                      //#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                      x10_long id__19944 = i19947;
                      ((x10_long)0ll);
                  }))
                  );
            }
        }
        
        //#line 323 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(raw) = r19949;
        
        //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10_long i2599max19963 = ((x10_long) ((((x10_long) ((workers) * (ins_per_thread)))) - (((x10_long)1ll))));
        
        //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
        {
            x10_long i19964;
            for (
                 //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                 i19964 = ((x10_long)0ll); ((i19964) <= (i2599max19963));
                 
                 //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                 i19964 = ((x10_long) ((i19964) + (((x10_long)1ll)))))
            {
                
                //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                x10_long i19965 = i19964;
                
                //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
                {
                    x10_long j19950;
                    for (
                         //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                         j19950 = ((x10_long)0ll); ((j19950) < (workers));
                         
                         //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                         j19950 = ((x10_long) ((j19950) + (((x10_long)1ll)))))
                    {
                        
                        //#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                        if (!(x10aux::nullCheck((__extension__ ({
                                  
                                  //#line 443 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                  x10_long i19951 = j19950;
                                  
                                  //#line 442 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                  x10::util::ArrayList<Main__LogEntry>* ret19952;
                                  
                                  //#line 446 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret19952 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                               i19951);
                                  ret19952;
                              }))
                              )->isEmpty())) {
                            
                            //#line 130 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                            Main__LogEntry v19953 = x10aux::nullCheck((__extension__ ({
                                                        
                                                        //#line 443 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_long i19954 =
                                                          j19950;
                                                        
                                                        //#line 442 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10::util::ArrayList<Main__LogEntry>* ret19955;
                                                        
                                                        //#line 446 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret19955 =
                                                          log->
                                                            FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                                            i19954);
                                                        ret19955;
                                                    }))
                                                    )->getFirst();
                            
                            //#line 131 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(v19953->
                                                         FMGL(order),
                                                       i19965)))
                            {
                                
                                //#line 132 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 443 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_long i19956 = j19950;
                                    
                                    //#line 442 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                    x10::util::ArrayList<Main__LogEntry>* ret19957;
                                    
                                    //#line 446 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret19957 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                                 i19956);
                                    ret19957;
                                }))
                                )->removeFirst();
                                
                                //#line 133 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                                if (v19953->FMGL(direction))
                                {
                                    
                                    //#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                    ch->put(v19953->FMGL(key),
                                            v19953->FMGL(value));
                                } else {
                                    
                                    //#line 136 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                    x10::util::Box<x10_long>* boxedValue19958 =
                                      ch->get(v19953->FMGL(key));
                                    
                                    //#line 137 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                    x10_long value19959;
                                    
                                    //#line 138 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 139 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                        value19959 = x10aux::nullCheck(boxedValue19958)->
                                                       FMGL(value);
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc12) {
                                        if (x10aux::instanceof<x10::lang::Exception*>(__exc12)) {
                                            x10::lang::Exception* id__19960 =
                                              static_cast<x10::lang::Exception*>(__exc12);
                                            {
                                                
                                                //#line 141 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                                value19959 =
                                                  ((x10_long)0ll);
                                            }
                                        } else
                                        throw;
                                    }
                                    
                                    //#line 143 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 144 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
                                        #ifndef NO_ASSERTIONS
                                        if (x10aux::x10__assertions_enabled)
                                            x10aux::x10__assert((x10aux::struct_equals(value19959,
                                                                                       v19953->
                                                                                         FMGL(value))));
                                        #endif//NO_ASSERTIONS
                                        
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc13) {
                                        if (x10aux::instanceof<x10::lang::AssertionError*>(__exc13)) {
                                            x10::lang::AssertionError* id__19961 =
                                              static_cast<x10::lang::AssertionError*>(__exc13);
                                            {
                                                
                                                //#line 147 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                                x10::io::Console::
                                                  FMGL(OUT__get)()->x10::io::Printer::println(
                                                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(value19959, x10aux::makeStringLit(" ")), v19953->
                                                                                                                                                                                                                                       FMGL(value)), x10aux::makeStringLit(" ")), v19953->
                                                                                                                                                                                                                                                                                    FMGL(order))));
                                            }
                                        } else
                                        throw;
                                    }
                                }
                                
                            }
                            
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 155 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("OK")));
    }
    
}

//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
Main* Main::Main____this__Main() {
    
    //#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorDecl_c
void Main::_constructor() {
    
    //#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    Main* this19967 = this;
    
}
Main* Main::_make() {
    Main* this_ = new (memset(x10aux::alloc<Main>(), 0, sizeof(Main))) Main();
    this_->_constructor();
    return this_;
}



//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
void Main::__fieldInitializers_Main() {
 
}
const x10aux::serialization_id_t Main::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Main::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* Main::_deserializer(x10aux::deserialization_buffer& buf) {
    Main* this_ = new (memset(x10aux::alloc<Main>(), 0, sizeof(Main))) Main();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Main::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType Main::rtt;
void Main::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Main",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_0::itable<Main__closure__1>Main__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Main__closure__1::__apply, &Main__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Main__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Main__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Main__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

/* END of Main */
/*************************************************/
/*************************************************/
/* START of Main$LogEntry */
#include <Main__LogEntry.h>

#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
class Main__LogEntry_ibox0 : public x10::lang::IBox<Main__LogEntry> {
public:
    static x10::lang::Any::itable<Main__LogEntry_ibox0 > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
x10::lang::Any::itable<Main__LogEntry_ibox0 >  Main__LogEntry_ibox0::itable(&Main__LogEntry_ibox0::equals, &Main__LogEntry_ibox0::hashCode, &Main__LogEntry_ibox0::toString, &Main__LogEntry_ibox0::typeName);
x10::lang::Any::itable<Main__LogEntry >  Main__LogEntry::_itable_0(&Main__LogEntry::equals, &Main__LogEntry::hashCode, &Main__LogEntry::toString, &Main__LogEntry::typeName);
x10aux::itable_entry Main__LogEntry::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &Main__LogEntry::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<Main__LogEntry>())};
x10aux::itable_entry Main__LogEntry::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &Main__LogEntry_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<Main__LogEntry>())};

//#line 32 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c

//#line 33 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c

//#line 34 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c

//#line 35 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10FieldDecl_c

//#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10ConstructorDecl_c


//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__LogEntry::typeName(){
    return x10aux::type_name((*this));
}

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__LogEntry::toString() {
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct Main.LogEntry:"), x10aux::makeStringLit(" direction=")), (*this)->
                                                                                                                                                                                                                                                                                                                    FMGL(direction)), x10aux::makeStringLit(" order=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                           FMGL(order)), x10aux::makeStringLit(" key=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(key)), x10aux::makeStringLit(" value=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                             FMGL(value));
    
}

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
x10_int Main__LogEntry::hashCode() {
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(direction)))));
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(order)))));
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(key)))));
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(value)))));
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__LogEntry::equals(x10::lang::Any* other) {
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__LogEntry>(other))) {
        
        //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__LogEntry::equals(x10aux::class_cast<Main__LogEntry>(other));
    
}

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__LogEntry::_struct_equals(x10::lang::Any* other) {
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__LogEntry>(other))) {
        
        //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__LogEntry::_struct_equals(x10aux::class_cast<Main__LogEntry>(other));
    
}

//#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c

//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c

//#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10MethodDecl_c
void Main__LogEntry::_serialize(Main__LogEntry this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(direction));
    buf.write(this_->FMGL(order));
    buf.write(this_->FMGL(key));
    buf.write(this_->FMGL(value));
    
}

void Main__LogEntry::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(direction) = buf.read<x10_boolean>();
    FMGL(order) = buf.read<x10_long>();
    FMGL(key) = buf.read<x10_long>();
    FMGL(value) = buf.read<x10_long>();
}


x10aux::RuntimeType Main__LogEntry::rtt;
void Main__LogEntry::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("Main.LogEntry",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of Main$LogEntry */
/*************************************************/
