#ifndef __MAIN_H
#define __MAIN_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace x10 { namespace util { 
class Option;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class System;
} } 
class Hash;
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
class Main__LogEntry;
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace lang { 
class AssertionError;
} } 
class Main : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_long FMGL(WORKERS);
    static void FMGL(WORKERS__do_init)();
    static void FMGL(WORKERS__init)();
    static volatile x10aux::StaticInitController::status FMGL(WORKERS__status);
    static x10::lang::CheckedThrowable* FMGL(WORKERS__exception);
    static x10_long FMGL(WORKERS__get)();
    
    static x10_long FMGL(INS_PER_THREAD);
    static void FMGL(INS_PER_THREAD__do_init)();
    static void FMGL(INS_PER_THREAD__init)();
    static volatile x10aux::StaticInitController::status FMGL(INS_PER_THREAD__status);
    static x10::lang::CheckedThrowable* FMGL(INS_PER_THREAD__exception);
    static x10_long FMGL(INS_PER_THREAD__get)();
    
    static x10_long FMGL(KEY_LIMIT);
    static void FMGL(KEY_LIMIT__do_init)();
    static void FMGL(KEY_LIMIT__init)();
    static volatile x10aux::StaticInitController::status FMGL(KEY_LIMIT__status);
    static x10::lang::CheckedThrowable* FMGL(KEY_LIMIT__exception);
    static x10_long FMGL(KEY_LIMIT__get)();
    
    static x10_long FMGL(VALUE_LIMIT);
    static void FMGL(VALUE_LIMIT__do_init)();
    static void FMGL(VALUE_LIMIT__init)();
    static volatile x10aux::StaticInitController::status FMGL(VALUE_LIMIT__status);
    static x10::lang::CheckedThrowable* FMGL(VALUE_LIMIT__exception);
    static x10_long FMGL(VALUE_LIMIT__get)();
    
    static x10_long FMGL(defaultValue);
    static void FMGL(defaultValue__do_init)();
    static void FMGL(defaultValue__init)();
    static volatile x10aux::StaticInitController::status FMGL(defaultValue__status);
    static x10::lang::CheckedThrowable* FMGL(defaultValue__exception);
    static x10_long FMGL(defaultValue__get)();
    
    static x10_double FMGL(RATIO);
    static void FMGL(RATIO__do_init)();
    static void FMGL(RATIO__init)();
    static volatile x10aux::StaticInitController::status FMGL(RATIO__status);
    static x10::lang::CheckedThrowable* FMGL(RATIO__exception);
    static x10_double FMGL(RATIO__get)();
    
    static void main(x10::lang::Rail<x10::lang::String* >* args);
    virtual Main* Main____this__Main();
    void _constructor();
    
    static Main* _make();
    
    virtual void __fieldInitializers_Main();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // MAIN_H

class Main;

#ifndef MAIN_H_NODEPS
#define MAIN_H_NODEPS
#ifndef MAIN_H_GENERICS
#define MAIN_H_GENERICS
inline x10_long Main::FMGL(WORKERS__get)() {
    if (FMGL(WORKERS__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(WORKERS__init)();
    }
    return Main::FMGL(WORKERS);
}

inline x10_long Main::FMGL(INS_PER_THREAD__get)() {
    if (FMGL(INS_PER_THREAD__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(INS_PER_THREAD__init)();
    }
    return Main::FMGL(INS_PER_THREAD);
}

inline x10_long Main::FMGL(KEY_LIMIT__get)() {
    if (FMGL(KEY_LIMIT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(KEY_LIMIT__init)();
    }
    return Main::FMGL(KEY_LIMIT);
}

inline x10_long Main::FMGL(VALUE_LIMIT__get)() {
    if (FMGL(VALUE_LIMIT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(VALUE_LIMIT__init)();
    }
    return Main::FMGL(VALUE_LIMIT);
}

inline x10_long Main::FMGL(defaultValue__get)() {
    if (FMGL(defaultValue__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(defaultValue__init)();
    }
    return Main::FMGL(defaultValue);
}

inline x10_double Main::FMGL(RATIO__get)() {
    if (FMGL(RATIO__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(RATIO__init)();
    }
    return Main::FMGL(RATIO);
}

#endif // MAIN_H_GENERICS
#endif // __MAIN_H_NODEPS
