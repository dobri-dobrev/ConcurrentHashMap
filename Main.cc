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
        
        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Try_c
        try {
            
            //#line 94 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
            x10::util::Random* rand19652 =  ((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
            ;
            
            //#line 94 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
            (rand19652)->::x10::util::Random::_constructor(x10::lang::RuntimeNatives::nanoTime());
            
            //#line 95 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.For_c
            {
                x10_long j19653;
                for (
                     //#line 95 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                     j19653 = ((x10_long)0ll); ((j19653) < (ins_per_thread));
                     
                     //#line 95 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                     j19653 = ((x10_long) ((j19653) + (((x10_long)1ll)))))
                {
                    
                    //#line 97 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                    x10_double d19654 = rand19652->nextDouble();
                    
                    //#line 98 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long key19655 = rand19652->nextLong(key_limit);
                    
                    //#line 99 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long value19656 = ((x10_long)0ll);
                    
                    //#line 100 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long order19657 = ((x10_long)0ll);
                    
                    //#line 102 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                    x10_boolean direction19658 = ((d19654) >= (ratio));
                    
                    //#line 103 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                    if (direction19658) {
                        
                        //#line 104 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value19656 = rand19652->nextLong(value_limit);
                        
                        //#line 105 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order19657 = h->put(key19655, value19656);
                    } else {
                        
                        //#line 109 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                        x10::util::Pair<x10_long, x10_long> orderValue19659 =
                          h->get(key19655);
                        
                        //#line 110 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order19657 = orderValue19659->FMGL(first);
                        
                        //#line 111 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value19656 = orderValue19659->FMGL(second);
                    }
                    
                    //#line 114 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 443 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                        x10_long i19660 = i19665;
                        
                        //#line 442 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                        x10::util::ArrayList<Main__LogEntry>* ret19661;
                        
                        //#line 446 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret19661 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                     i19660);
                        ret19661;
                    }))
                    )->add((__extension__ ({
                               
                               //#line 114 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                               Main__LogEntry alloc19662 =  Main__LogEntry::_alloc();
                               
                               //#line 114 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
                               (alloc19662)->::Main__LogEntry::_constructor(
                                 direction19658, order19657, key19655,
                                 value19656);
                               alloc19662;
                           }))
                           );
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc9) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc9)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc9);
                {
                    
                    //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc9);
                {
                    
                    //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
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
    x10_long i19665;
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
        buf.write(this->i19665);
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
        x10_long that_i19665 = buf.read<x10_long>();
        x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* that_log = buf.read<x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>*>();
        Main__closure__1* this_ = new (storage) Main__closure__1(that_ins_per_thread, that_key_limit, that_ratio, that_value_limit, that_h, that_i19665, that_log);
        return this_;
    }
    
    Main__closure__1(x10_long ins_per_thread, x10_long key_limit, x10_double ratio, x10_long value_limit, Hash* h, x10_long i19665, x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log) : ins_per_thread(ins_per_thread), key_limit(key_limit), ratio(ratio), value_limit(value_limit), h(h), i19665(i19665), log(log) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/dhd2110/ConcurrentHashMap/Main.x10:93-116";
    }

};

#endif // MAIN__CLOSURE__1_CLOSURE

//#line 22 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 23 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 24 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 25 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 26 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 27 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c
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

//#line 47 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
void Main::main(x10::lang::Rail<x10::lang::String* >* args) {
    
    //#line 51 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10::util::OptionsParser* opts =  ((new (memset(x10aux::alloc<x10::util::OptionsParser>(), 0, sizeof(x10::util::OptionsParser))) x10::util::OptionsParser()))
    ;
    
    //#line 51 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
    (opts)->::x10::util::OptionsParser::_constructor(args, (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                         x10::lang::Rail<x10::util::Option >* __var7__(x10::lang::Rail<x10::util::Option>::_make(2));
                                                         __var7__->__set(0, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 52 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2304 =
                                                                 x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19624 =
                                                                x10aux::makeStringLit("h");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19625 =
                                                                x10aux::makeStringLit("help");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19626 =
                                                                x10aux::makeStringLit("this information");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2304)->::x10::util::Option::_constructor(
                                                                s19624,
                                                                l19625,
                                                                d19626,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2304;
                                                          }))
                                                          ));
                                                         __var7__->__set(1, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 53 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2305 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19627 =
                                                                x10aux::makeStringLit("c");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19628 =
                                                                x10aux::makeStringLit("check");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19629 =
                                                                x10aux::makeStringLit("perform correctness check");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2305)->::x10::util::Option::_constructor(
                                                                s19627,
                                                                l19628,
                                                                d19629,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2305;
                                                          }))
                                                          ));
                                                         __var7__;
                                                     })),
                                                     (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                         x10::lang::Rail<x10::util::Option >* __var8__(x10::lang::Rail<x10::util::Option>::_make(5));
                                                         __var8__->__set(0, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 55 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2306 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19630 =
                                                                x10aux::makeStringLit("i");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19631 =
                                                                x10aux::makeStringLit("insertions");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19632 =
                                                                x10aux::makeStringLit("number of insertions per thread");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2306)->::x10::util::Option::_constructor(
                                                                s19630,
                                                                l19631,
                                                                d19632,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2306;
                                                          }))
                                                          ));
                                                         __var8__->__set(1, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 56 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2307 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19633 =
                                                                x10aux::makeStringLit("r");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19634 =
                                                                x10aux::makeStringLit("ratio");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19635 =
                                                                x10aux::makeStringLit("percentage of get w.r.t. total operations");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2307)->::x10::util::Option::_constructor(
                                                                s19633,
                                                                l19634,
                                                                d19635,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2307;
                                                          }))
                                                          ));
                                                         __var8__->__set(2, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 57 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2308 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19636 =
                                                                x10aux::makeStringLit("t");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19637 =
                                                                x10aux::makeStringLit("threads");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19638 =
                                                                x10aux::makeStringLit("number of threads");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2308)->::x10::util::Option::_constructor(
                                                                s19636,
                                                                l19637,
                                                                d19638,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2308;
                                                          }))
                                                          ));
                                                         __var8__->__set(3, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 58 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2309 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19639 =
                                                                x10aux::makeStringLit("k");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19640 =
                                                                x10aux::makeStringLit("key-limit");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19641 =
                                                                x10aux::makeStringLit("maximum value of a key");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2309)->::x10::util::Option::_constructor(
                                                                s19639,
                                                                l19640,
                                                                d19641,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2309;
                                                          }))
                                                          ));
                                                         __var8__->__set(4, 
                                                         ((__extension__ ({
                                                              
                                                              //#line 59 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                                              x10::util::Option alloc2310 =
                                                                
                                                              x10::util::Option::_alloc();
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* s19642 =
                                                                x10aux::makeStringLit("v");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* l19643 =
                                                                x10aux::makeStringLit("value-limit");
                                                              
                                                              //#line 94 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10LocalDecl_c
                                                              x10::lang::String* d19644 =
                                                                x10aux::makeStringLit("maximum value of a value");
                                                              
                                                              //#line 95 "/opt/x10/stdlib/x10.jar:x10/util/Option.x10": x10.ast.X10ConstructorCall_c
                                                              (alloc2310)->::x10::util::Option::_constructor(
                                                                s19642,
                                                                l19643,
                                                                d19644,
                                                                ((x10_int)0),
                                                                false,
                                                                false,
                                                                false);
                                                              alloc2310;
                                                          }))
                                                          ));
                                                         __var8__;
                                                     })));
    
    //#line 61 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals((x10_long)(x10aux::nullCheck(opts->filteredArgs())->FMGL(size)),
                                ((x10_long)0ll)))) {
        
        //#line 62 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Unexpected arguments: "), opts->filteredArgs())));
        
        //#line 63 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Use -h or --help.")));
        
        //#line 64 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
        if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                     x10::lang::Place::FMGL(FIRST_PLACE__get)()))))
        {
            
            //#line 64 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 64 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x10.lang.Place.FIRST_PLACE)"))));
            }
            
        }
        
        //#line 64 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        (x10aux::exitCode = (((x10_int)1)));
        
        //#line 65 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 67 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
    if (opts->x10::util::OptionsParser::__apply(x10aux::makeStringLit("-h")))
    {
        
        //#line 68 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(opts->usage(x10aux::makeStringLit(""))));
        
        //#line 69 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 72 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long workers = opts->x10::util::OptionsParser::__apply(
                         x10aux::makeStringLit("-t"), ((x10_long)8ll));
    
    //#line 73 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((workers) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 74 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_double ratio = opts->x10::util::OptionsParser::__apply(
                         x10aux::makeStringLit("-r"), 0.8);
    
    //#line 75 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((ratio) > (0.0)) && ((ratio) < (1.0)));
    #endif//NO_ASSERTIONS
    
    //#line 76 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long ins_per_thread = opts->x10::util::OptionsParser::__apply(
                                x10aux::makeStringLit("-i"),
                                ((x10_long)1000ll));
    
    //#line 77 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((ins_per_thread) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 78 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_boolean check = opts->x10::util::OptionsParser::__apply(
                          x10aux::makeStringLit("-c"));
    
    //#line 79 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long key_limit = opts->x10::util::OptionsParser::__apply(
                           x10aux::makeStringLit("-k"), ((x10_long)100ll));
    
    //#line 80 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((key_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 81 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long value_limit = opts->x10::util::OptionsParser::__apply(
                             x10aux::makeStringLit("-v"),
                             ((x10_long)100ll));
    
    //#line 82 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((value_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 85 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(workers, x10aux::makeStringLit(" Workers\t")), ins_per_thread), x10aux::makeStringLit(" <key,value> pairs per thread\t")), ratio), x10aux::makeStringLit(" ratio of get w.r.t. total number of operations"))));
    
    //#line 87 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    Hash* h =  ((new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash()))
    ;
    
    //#line 87 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
    (h)->::Hash::_constructor(((x10_long)0ll));
    
    //#line 89 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log =
       ((new (memset(x10aux::alloc<x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*> >(), 0, sizeof(x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>))) x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>()))
    ;
    
    //#line 312 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10_long size19687 = workers;
    
    //#line 314 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10::regionarray::RectRegion1D* myReg19650 =  ((new (memset(x10aux::alloc<x10::regionarray::RectRegion1D>(), 0, sizeof(x10::regionarray::RectRegion1D))) x10::regionarray::RectRegion1D()))
    ;
    
    //#line 314 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg19650)->::x10::regionarray::RectRegion1D::_constructor(
      ((x10_long) ((size19687) - (((x10_long)1ll)))));
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(region) = reinterpret_cast<x10::regionarray::Region*>(myReg19650);
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rank) = ((x10_long)1ll);
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rect) = true;
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(zeroBased) = true;
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(rail) = true;
    
    //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(size) = size19687;
    
    //#line 317 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(layout_min0) = log->FMGL(layout_stride1) = log->
                                                           FMGL(layout_min1) =
      ((x10_long)0ll);
    
    //#line 318 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(layout) = (x10aux::class_cast_unchecked<x10::lang::Rail<x10_long >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 319 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >* r19651 =
      x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::_makeUnsafe(size19687, false);
    
    //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
    x10_long i16231max19647 = ((x10_long) ((size19687) - (((x10_long)1ll))));
    
    //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": polyglot.ast.For_c
    {
        x10_long i19648;
        for (
             //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
             i19648 = ((x10_long)0ll); ((i19648) <= (i16231max19647));
             
             //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i19648 = ((x10_long) ((i19648) + (((x10_long)1ll)))))
        {
            
            //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
            x10_long i19649 = i19648;
            
            //#line 321 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10Call_c
            r19651->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__set(
              i19649, (__extension__ ({
                  
                  //#line 89 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                  x10_long id__19645 = i19649;
                  (__extension__ ({
                      
                      //#line 89 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                      x10::util::ArrayList<Main__LogEntry>* alloc19646 =
                         ((new (memset(x10aux::alloc<x10::util::ArrayList<Main__LogEntry> >(), 0, sizeof(x10::util::ArrayList<Main__LogEntry>))) x10::util::ArrayList<Main__LogEntry>()))
                      ;
                      
                      //#line 89 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
                      (alloc19646)->::x10::util::ArrayList<Main__LogEntry>::_constructor();
                      alloc19646;
                  }))
                  ;
              }))
              );
        }
    }
    
    //#line 323 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
    log->FMGL(raw) = r19651;
    
    //#line 91 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long start = x10::lang::RuntimeNatives::currentTimeMillis();
    {
        
        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
        {
            
            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable19693 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Try_c
            try {
                
                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                        x10_long i2333max19663 = ((x10_long) ((workers) - (((x10_long)1ll))));
                        
                        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.For_c
                        {
                            x10_long i19664;
                            for (
                                 //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                 i19664 = ((x10_long)0ll);
                                 ((i19664) <= (i2333max19663));
                                 
                                 //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                 i19664 = ((x10_long) ((i19664) + (((x10_long)1ll)))))
                            {
                                
                                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                x10_long i19665 = i19664;
                                
                                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Main__closure__1)))Main__closure__1(ins_per_thread, key_limit, ratio, value_limit, h, i19665, log))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc10) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc10);
                        {
                            
                            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc11) {
                if (true) {
                    x10::lang::CheckedThrowable* formal19694 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc11);
                    {
                        
                        //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable19693 = formal19694;
                    }
                } else
                throw;
            }
            
            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable19693)))
            {
                
                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable19693))
                {
                    
                    //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable19693));
                }
                
            }
            
            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var0);
            }
            
            //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable19693)))
            {
                
                //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable19693)))
                {
                    
                    //#line 93 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable19693));
                }
                
            }
            
        }
    }
    
    //#line 117 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_long end = x10::lang::RuntimeNatives::currentTimeMillis();
    
    //#line 118 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("\nIt took: "), ((x10_long) ((end) - (start)))), x10aux::makeStringLit("ms"))));
    
    //#line 122 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
    if (check) {
        
        //#line 123 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->print(x10aux::makeStringLit("Checking Correctness....."));
        
        //#line 124 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_long, x10_long>* ch =  ((new (memset(x10aux::alloc<x10::util::HashMap<x10_long, x10_long> >(), 0, sizeof(x10::util::HashMap<x10_long, x10_long>))) x10::util::HashMap<x10_long, x10_long>()))
        ;
        
        //#line 124 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorCall_c
        (ch)->::x10::util::HashMap<x10_long, x10_long>::_constructor();
        
        //#line 125 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
        x10::regionarray::Array<x10_long>* indexes =  ((new (memset(x10aux::alloc<x10::regionarray::Array<x10_long> >(), 0, sizeof(x10::regionarray::Array<x10_long>))) x10::regionarray::Array<x10_long>()))
        ;
        
        //#line 312 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10_long size19683 = workers;
        
        //#line 314 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10::regionarray::RectRegion1D* myReg19670 =  ((new (memset(x10aux::alloc<x10::regionarray::RectRegion1D>(), 0, sizeof(x10::regionarray::RectRegion1D))) x10::regionarray::RectRegion1D()))
        ;
        
        //#line 314 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg19670)->::x10::regionarray::RectRegion1D::_constructor(
          ((x10_long) ((size19683) - (((x10_long)1ll)))));
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(region) = reinterpret_cast<x10::regionarray::Region*>(myReg19670);
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rank) = ((x10_long)1ll);
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rect) = true;
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(zeroBased) = true;
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(rail) = true;
        
        //#line 315 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(size) = size19683;
        
        //#line 317 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(layout_min0) = indexes->FMGL(layout_stride1) =
          indexes->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(layout) = (x10aux::class_cast_unchecked<x10::lang::Rail<x10_long >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Rail<x10_long >* r19671 = x10::lang::Rail<x10_long >::_makeUnsafe(size19683, false);
        
        //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
        x10_long i16231max19667 = ((x10_long) ((size19683) - (((x10_long)1ll))));
        
        //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": polyglot.ast.For_c
        {
            x10_long i19668;
            for (
                 //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                 i19668 = ((x10_long)0ll); ((i19668) <= (i16231max19667));
                 
                 //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i19668 = ((x10_long) ((i19668) + (((x10_long)1ll)))))
            {
                
                //#line 320 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                x10_long i19669 = i19668;
                
                //#line 321 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10Call_c
                r19671->x10::lang::Rail<x10_long >::__set(
                  i19669, (__extension__ ({
                      
                      //#line 125 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                      x10_long id__19666 = i19669;
                      ((x10_long)0ll);
                  }))
                  );
            }
        }
        
        //#line 323 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10FieldAssign_c
        indexes->FMGL(raw) = r19671;
        
        //#line 127 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
        x10_long i2349max19684 = ((x10_long) ((((x10_long) ((workers) * (ins_per_thread)))) - (((x10_long)1ll))));
        
        //#line 127 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.For_c
        {
            x10_long i19685;
            for (
                 //#line 127 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                 i19685 = ((x10_long)0ll); ((i19685) <= (i2349max19684));
                 
                 //#line 127 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                 i19685 = ((x10_long) ((i19685) + (((x10_long)1ll)))))
            {
                
                //#line 127 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                x10_long i19686 = i19685;
                
                //#line 128 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.For_c
                {
                    x10_long j19672;
                    for (
                         //#line 128 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                         j19672 = ((x10_long)0ll); ((j19672) < (workers));
                         
                         //#line 128 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                         j19672 = ((x10_long) ((j19672) + (((x10_long)1ll)))))
                    {
                        
                        //#line 129 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                        if (!(x10aux::nullCheck((__extension__ ({
                                  
                                  //#line 443 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                  x10_long i19673 = j19672;
                                  
                                  //#line 442 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                  x10::util::ArrayList<Main__LogEntry>* ret19674;
                                  
                                  //#line 446 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret19674 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                               i19673);
                                  ret19674;
                              }))
                              )->isEmpty())) {
                            
                            //#line 130 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                            Main__LogEntry v19675 = x10aux::nullCheck((__extension__ ({
                                                        
                                                        //#line 443 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_long i19676 =
                                                          j19672;
                                                        
                                                        //#line 442 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10::util::ArrayList<Main__LogEntry>* ret19677;
                                                        
                                                        //#line 446 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret19677 =
                                                          log->
                                                            FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                                            i19676);
                                                        ret19677;
                                                    }))
                                                    )->getFirst();
                            
                            //#line 131 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(v19675->
                                                         FMGL(order),
                                                       i19686)))
                            {
                                
                                //#line 132 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                                x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 443 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_long i19678 = j19672;
                                    
                                    //#line 442 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": x10.ast.X10LocalDecl_c
                                    x10::util::ArrayList<Main__LogEntry>* ret19679;
                                    
                                    //#line 446 "/opt/x10/stdlib/x10.jar:x10/regionarray/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret19679 = log->FMGL(raw)->x10::lang::Rail<x10::util::ArrayList<Main__LogEntry>* >::__apply(
                                                 i19678);
                                    ret19679;
                                }))
                                )->removeFirst();
                                
                                //#line 133 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
                                if (v19675->FMGL(direction))
                                {
                                    
                                    //#line 134 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
                                    ch->put(v19675->FMGL(key),
                                            v19675->FMGL(value));
                                } else {
                                    
                                    //#line 136 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                    x10::util::Box<x10_long>* boxedValue19680 =
                                      ch->get(v19675->FMGL(key));
                                    
                                    //#line 137 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
                                    x10_long value19681;
                                    
                                    //#line 138 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 139 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                        value19681 = x10aux::nullCheck(boxedValue19680)->
                                                       FMGL(value);
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc12) {
                                        if (x10aux::instanceof<x10::lang::Exception*>(__exc12)) {
                                            x10::lang::Exception* id__19682 =
                                              static_cast<x10::lang::Exception*>(__exc12);
                                            {
                                                
                                                //#line 141 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                                value19681 =
                                                  ((x10_long)0ll);
                                            }
                                        } else
                                        throw;
                                    }
                                    
                                    //#line 143 "/home/dhd2110/ConcurrentHashMap/Main.x10": polyglot.ast.Assert_c
                                    #ifndef NO_ASSERTIONS
                                    if (x10aux::x10__assertions_enabled)
                                        x10aux::x10__assert((x10aux::struct_equals(value19681,
                                                                                   v19675->
                                                                                     FMGL(value))));
                                    #endif//NO_ASSERTIONS
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 149 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("OK")));
    }
    
}

//#line 18 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
Main* Main::Main____this__Main() {
    
    //#line 18 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 19 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorDecl_c
void Main::_constructor() {
    
    //#line 19 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    Main* this19688 = this;
    
}
Main* Main::_make() {
    Main* this_ = new (memset(x10aux::alloc<Main>(), 0, sizeof(Main))) Main();
    this_->_constructor();
    return this_;
}



//#line 18 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
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

//#line 32 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c

//#line 33 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c

//#line 35 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10FieldDecl_c

//#line 37 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10ConstructorDecl_c


//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__LogEntry::typeName(){
    return x10aux::type_name((*this));
}

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__LogEntry::toString() {
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct Main.LogEntry:"), x10aux::makeStringLit(" direction=")), (*this)->
                                                                                                                                                                                                                                                                                                                    FMGL(direction)), x10aux::makeStringLit(" order=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                           FMGL(order)), x10aux::makeStringLit(" key=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(key)), x10aux::makeStringLit(" value=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                             FMGL(value));
    
}

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
x10_int Main__LogEntry::hashCode() {
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(direction)))));
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(order)))));
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(key)))));
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(value)))));
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__LogEntry::equals(x10::lang::Any* other) {
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__LogEntry>(other))) {
        
        //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__LogEntry::equals(x10aux::class_cast<Main__LogEntry>(other));
    
}

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__LogEntry::_struct_equals(x10::lang::Any* other) {
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__LogEntry>(other))) {
        
        //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__LogEntry::_struct_equals(x10aux::class_cast<Main__LogEntry>(other));
    
}

//#line 31 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/dhd2110/ConcurrentHashMap/Main.x10": x10.ast.X10MethodDecl_c
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
