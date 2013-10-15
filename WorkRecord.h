#ifndef __WORKRECORD_H
#define __WORKRECORD_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
class WorkRecord : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_boolean FMGL(isEnqueue);
    
    x10_long FMGL(key);
    
    x10_long FMGL(value);
    
    x10_boolean FMGL(isDone);
    
    x10_long FMGL(result);
    
    void _constructor(x10_boolean isEn, x10_long k, x10_long v);
    
    static WorkRecord* _make(x10_boolean isEn, x10_long k, x10_long v);
    
    virtual WorkRecord* WorkRecord____this__WorkRecord();
    virtual void __fieldInitializers_WorkRecord();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // WORKRECORD_H

class WorkRecord;

#ifndef WORKRECORD_H_NODEPS
#define WORKRECORD_H_NODEPS
#ifndef WORKRECORD_H_GENERICS
#define WORKRECORD_H_GENERICS
#endif // WORKRECORD_H_GENERICS
#endif // __WORKRECORD_H_NODEPS
