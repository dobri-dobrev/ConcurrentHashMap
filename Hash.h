#ifndef __HASH_H
#define __HASH_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class WorkRecord;
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
class Hash : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10::util::HashMap<x10_long, x10_long>* FMGL(h);
    
    x10_long FMGL(counter);
    
    x10_long FMGL(defaultValue);
    
    x10::lang::Rail<WorkRecord* >* FMGL(buffer);
    
    void _constructor(x10_long defV);
    
    static Hash* _make(x10_long defV);
    
    virtual x10_long put(x10_long key, x10_long value);
    virtual x10::util::Pair<x10_long, x10_long> get(x10_long key);
    virtual Hash* Hash____this__Hash();
    virtual void __fieldInitializers_Hash();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // HASH_H

class Hash;

#ifndef HASH_H_NODEPS
#define HASH_H_NODEPS
#ifndef HASH_H_GENERICS
#define HASH_H_GENERICS
#endif // HASH_H_GENERICS
#endif // __HASH_H_NODEPS
