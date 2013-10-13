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
#include <x10/lang/Fun_0_1.h>
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
#include <x10/lang/Fun_0_1.h>
class Main__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*>::itable<Main__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::util::ArrayList<Main__LogEntry>* __apply(x10_long id__0) {
        
        //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return x10::util::ArrayList<Main__LogEntry>::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Main__closure__1* storage = x10aux::alloc<Main__closure__1>();
        buf.record_reference(storage);
        Main__closure__1* this_ = new (storage) Main__closure__1();
        return this_;
    }
    
    Main__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*> >(); }
    
    const char* toNativeString() {
        return "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10:89";
    }

};

#endif // MAIN__CLOSURE__1_CLOSURE
#ifndef MAIN__CLOSURE__2_CLOSURE
#define MAIN__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Main__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Main__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
        try {
            
            //#line 94 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
            x10::util::Random* rand1866 = x10::util::Random::_make(x10::lang::System::nanoTime());
            
            //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
            {
                x10_long j1867;
                for (
                     //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                     j1867 = ((x10_long)0ll); ((j1867) < (ins_per_thread));
                     
                     //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                     j1867 = ((x10_long) ((j1867) + (((x10_long)1ll))))) {
                    
                    //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_double d1868 = rand1866->nextDouble();
                    
                    //#line 98 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long key1869 = rand1866->nextLong(key_limit);
                    
                    //#line 99 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long value1870 = ((x10_long)0ll);
                    
                    //#line 100 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_long order1871 = ((x10_long)0ll);
                    
                    //#line 102 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                    x10_boolean direction1872 = ((d1868) >= (ratio));
                    
                    //#line 103 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                    if (direction1872) {
                        
                        //#line 104 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value1870 = rand1866->nextLong(value_limit);
                        
                        //#line 105 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order1871 = h->put(key1869, value1870);
                    } else {
                        
                        //#line 109 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                        x10::util::Pair<x10_long, x10_long> orderValue1873 =
                          h->get(key1869);
                        
                        //#line 110 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        order1871 = orderValue1873->FMGL(first);
                        
                        //#line 111 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        value1870 = orderValue1873->FMGL(second);
                    }
                    
                    //#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(log->x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>::__apply(
                                        i1877))->add(Main__LogEntry::_make(direction1872,
                                                                           order1871,
                                                                           key1869,
                                                                           value1870));
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
    x10_long i1877;
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
        buf.write(this->i1877);
        buf.write(this->log);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Main__closure__2* storage = x10aux::alloc<Main__closure__2>();
        buf.record_reference(storage);
        x10_long that_ins_per_thread = buf.read<x10_long>();
        x10_long that_key_limit = buf.read<x10_long>();
        x10_double that_ratio = buf.read<x10_double>();
        x10_long that_value_limit = buf.read<x10_long>();
        Hash* that_h = buf.read<Hash*>();
        x10_long that_i1877 = buf.read<x10_long>();
        x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* that_log = buf.read<x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>*>();
        Main__closure__2* this_ = new (storage) Main__closure__2(that_ins_per_thread, that_key_limit, that_ratio, that_value_limit, that_h, that_i1877, that_log);
        return this_;
    }
    
    Main__closure__2(x10_long ins_per_thread, x10_long key_limit, x10_double ratio, x10_long value_limit, Hash* h, x10_long i1877, x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log) : ins_per_thread(ins_per_thread), key_limit(key_limit), ratio(ratio), value_limit(value_limit), h(h), i1877(i1877), log(log) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10:93-116";
    }

};

#endif // MAIN__CLOSURE__2_CLOSURE
#ifndef MAIN__CLOSURE__3_CLOSURE
#define MAIN__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Main__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_long>::itable<Main__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long id__1) {
        
        //#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return ((x10_long)0ll);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Main__closure__3* storage = x10aux::alloc<Main__closure__3>();
        buf.record_reference(storage);
        Main__closure__3* this_ = new (storage) Main__closure__3();
        return this_;
    }
    
    Main__closure__3() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    const char* toNativeString() {
        return "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10:125";
    }

};

#endif // MAIN__CLOSURE__3_CLOSURE

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
    x10::util::OptionsParser* opts = x10::util::OptionsParser::_make(args,
                                                                     (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                                         x10::lang::Rail<x10::util::Option >* __var7__(x10::lang::Rail<x10::util::Option>::_make(2));
                                                                         __var7__->__set(0, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("h"),
                                                                                                   x10aux::makeStringLit("help"),
                                                                                                   x10aux::makeStringLit("this information"))));
                                                                         __var7__->__set(1, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("c"),
                                                                                                   x10aux::makeStringLit("check"),
                                                                                                   x10aux::makeStringLit("perform correctness check"))));
                                                                         __var7__;
                                                                     })),
                                                                     (x10::lang::Rail<x10::util::Option >*)(__extension__ ({
                                                                         x10::lang::Rail<x10::util::Option >* __var8__(x10::lang::Rail<x10::util::Option>::_make(5));
                                                                         __var8__->__set(0, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("i"),
                                                                                                   x10aux::makeStringLit("insertions"),
                                                                                                   x10aux::makeStringLit("number of insertions per thread"))));
                                                                         __var8__->__set(1, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("r"),
                                                                                                   x10aux::makeStringLit("ratio"),
                                                                                                   x10aux::makeStringLit("percentage of get w.r.t. total operations"))));
                                                                         __var8__->__set(2, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("t"),
                                                                                                   x10aux::makeStringLit("threads"),
                                                                                                   x10aux::makeStringLit("number of threads"))));
                                                                         __var8__->__set(3, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("k"),
                                                                                                   x10aux::makeStringLit("key-limit"),
                                                                                                   x10aux::makeStringLit("maximum value of a key"))));
                                                                         __var8__->__set(4, 
                                                                         (x10::util::Option::_make(x10aux::makeStringLit("v"),
                                                                                                   x10aux::makeStringLit("value-limit"),
                                                                                                   x10aux::makeStringLit("maximum value of a value"))));
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
        
        //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Empty_c
        ;
        
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
                         x10aux::makeStringLit("-t"), Main::
                                                        FMGL(WORKERS__get)());
    
    //#line 73 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((workers) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 74 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_double ratio = opts->x10::util::OptionsParser::__apply(
                         x10aux::makeStringLit("-r"), Main::
                                                        FMGL(RATIO__get)());
    
    //#line 75 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((ratio) > (0.0)) && ((ratio) < (1.0)));
    #endif//NO_ASSERTIONS
    
    //#line 76 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long ins_per_thread = opts->x10::util::OptionsParser::__apply(
                                x10aux::makeStringLit("-i"),
                                Main::FMGL(INS_PER_THREAD__get)());
    
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
                           x10aux::makeStringLit("-k"), Main::
                                                          FMGL(KEY_LIMIT__get)());
    
    //#line 80 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((key_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 81 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long value_limit = opts->x10::util::OptionsParser::__apply(
                             x10aux::makeStringLit("-v"),
                             Main::FMGL(VALUE_LIMIT__get)());
    
    //#line 82 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(((value_limit) > (((x10_long)0ll))));
    #endif//NO_ASSERTIONS
    
    //#line 85 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(workers, x10aux::makeStringLit(" Workers\t")), ins_per_thread), x10aux::makeStringLit(" <key,value> pairs per thread\t")), ratio), x10aux::makeStringLit(" ratio of get w.r.t. total number of operations"))));
    
    //#line 87 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    Hash* h = Hash::_make(Main::FMGL(defaultValue__get)());
    
    //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>* log =
      x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>::_make(workers,
                                                                            reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*> >(sizeof(Main__closure__1)))Main__closure__1())));
    
    //#line 91 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
    x10_long start = x10::lang::RuntimeNatives::currentTimeMillis();
    {
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
        {
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable1891 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
            try {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                        x10_long i1831min1874 = ((x10_long)0ll);
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                        x10_long i1831max1875 = ((x10_long) ((workers) - (((x10_long)1ll))));
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
                        {
                            x10_long i1876;
                            for (
                                 //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                 i1876 = i1831min1874; ((i1876) <= (i1831max1875));
                                 
                                 //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                 i1876 = ((x10_long) ((i1876) + (((x10_long)1ll)))))
                            {
                                
                                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                x10_long i1877 = i1876;
                                
                                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Main__closure__2)))Main__closure__2(ins_per_thread, key_limit, ratio, value_limit, h, i1877, log))));
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
                    x10::lang::CheckedThrowable* formal1892 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc11);
                    {
                        
                        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable1891 = formal1892;
                    }
                } else
                throw;
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable1891))) {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable1891))
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable1891));
                }
                
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var0);
            }
            
            //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable1891))) {
                
                //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable1891)))
                {
                    
                    //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable1891));
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
        x10::util::HashMap<x10_long, x10_long>* ch = x10::util::HashMap<x10_long, x10_long>::_make();
        
        //#line 125 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10::regionarray::Array<x10_long>* indexes = x10::regionarray::Array<x10_long>::_make(workers,
                                                                                              reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(Main__closure__3)))Main__closure__3())));
        
        //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10_long i1847min1883 = ((x10_long)0ll);
        
        //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
        x10_long i1847max1884 = ((x10_long) ((((x10_long) ((workers) * (ins_per_thread)))) - (((x10_long)1ll))));
        
        //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
        {
            x10_long i1885;
            for (
                 //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                 i1885 = i1847min1883; ((i1885) <= (i1847max1884));
                 
                 //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                 i1885 = ((x10_long) ((i1885) + (((x10_long)1ll)))))
            {
                
                //#line 127 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                x10_long i1886 = i1885;
                
                //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.For_c
                {
                    x10_long j1878;
                    for (
                         //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                         j1878 = ((x10_long)0ll); ((j1878) < (workers));
                         
                         //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                         j1878 = ((x10_long) ((j1878) + (((x10_long)1ll)))))
                    {
                        
                        //#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                        if (!(x10aux::nullCheck(log->x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>::__apply(
                                                  j1878))->isEmpty()))
                        {
                            
                            //#line 130 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                            Main__LogEntry v1879 = x10aux::nullCheck(log->x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>::__apply(
                                                                       j1878))->getFirst();
                            
                            //#line 131 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(v1879->
                                                         FMGL(order),
                                                       i1886)))
                            {
                                
                                //#line 132 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                x10aux::nullCheck(log->x10::regionarray::Array<x10::util::ArrayList<Main__LogEntry>*>::__apply(
                                                    j1878))->removeFirst();
                                
                                //#line 133 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10If_c
                                if (v1879->FMGL(direction))
                                {
                                    
                                    //#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
                                    ch->put(v1879->FMGL(key),
                                            v1879->FMGL(value));
                                } else {
                                    
                                    //#line 136 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                    x10::util::Box<x10_long>* boxedValue1880 =
                                      ch->get(v1879->FMGL(key));
                                    
                                    //#line 137 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10LocalDecl_c
                                    x10_long value1881;
                                    
                                    //#line 138 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 139 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                        value1881 = x10aux::nullCheck(boxedValue1880)->x10::util::Box<x10_long>::__apply();
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc12) {
                                        if (x10aux::instanceof<x10::lang::Exception*>(__exc12)) {
                                            x10::lang::Exception* id__1882 =
                                              static_cast<x10::lang::Exception*>(__exc12);
                                            {
                                                
                                                //#line 141 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10LocalAssign_c
                                                value1881 =
                                                  Main::FMGL(defaultValue__get)();
                                            }
                                        } else
                                        throw;
                                    }
                                    
                                    //#line 143 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Assert_c
                                    #ifndef NO_ASSERTIONS
                                    if (x10aux::x10__assertions_enabled)
                                        x10aux::x10__assert((x10aux::struct_equals(value1881,
                                                                                   v1879->
                                                                                     FMGL(value))));
                                    #endif//NO_ASSERTIONS
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                }
                
            }
        }
        
        //#line 149 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
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
    
    //#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Empty_c
    ;
    
    //#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
    this->Main::__fieldInitializers_Main();
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

x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*>::itable<Main__closure__1>Main__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Main__closure__1::__apply, &Main__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Main__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::util::ArrayList<Main__LogEntry>*> >, &Main__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Main__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Main__closure__2>Main__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Main__closure__2::__apply, &Main__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Main__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Main__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Main__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_long>::itable<Main__closure__3>Main__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Main__closure__3::__apply, &Main__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Main__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >, &Main__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Main__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

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
