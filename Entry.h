#ifndef __ENTRY_H
#define __ENTRY_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
class Entry : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(key);
    
    x10_long FMGL(value);
    
    void _constructor(x10_long k, x10_long v);
    
    static Entry* _make(x10_long k, x10_long v);
    
    virtual void setValue(x10_long v);
    virtual Entry* Entry____this__Entry();
    virtual void __fieldInitializers_Entry();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // ENTRY_H

class Entry;

#ifndef ENTRY_H_NODEPS
#define ENTRY_H_NODEPS
#ifndef ENTRY_H_GENERICS
#define ENTRY_H_GENERICS
#endif // ENTRY_H_GENERICS
#endif // __ENTRY_H_NODEPS
