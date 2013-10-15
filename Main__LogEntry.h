#ifndef __MAIN__LOGENTRY_H
#define __MAIN__LOGENTRY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
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
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
class Main__LogEntry   {
    public:
    RTT_H_DECLS_STRUCT
    
    Main__LogEntry* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<Main__LogEntry > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static Main__LogEntry _alloc(){Main__LogEntry t; return t; }
    
    x10_boolean FMGL(direction);
    
    x10_long FMGL(order);
    
    x10_long FMGL(key);
    
    x10_long FMGL(value);
    
    void _constructor(x10_boolean direction, x10_long order, x10_long key,
                      x10_long value) {
        
        //#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": polyglot.ast.Empty_c
        ;
        
        //#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.AssignPropertyCall_c
        
        //#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10Call_c
        (*this)->Main__LogEntry::__fieldInitializers_Main_LogEntry();
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(direction) = direction;
        
        //#line 40 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(order) = order;
        
        //#line 41 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(key) = key;
        
        //#line 42 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(value) = value;
    }
    static Main__LogEntry _make(x10_boolean direction, x10_long order, x10_long key,
                                x10_long value) {
        Main__LogEntry this_; 
        this_->_constructor(direction, order, key, value);
        return this_;
    }
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(Main__LogEntry other) {
        
        //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(direction), other->
                                                                  FMGL(direction))) &&
        (x10aux::struct_equals((*this)->FMGL(order), other->
                                                       FMGL(order))) &&
        (x10aux::struct_equals((*this)->FMGL(key), other->
                                                     FMGL(key))) &&
        (x10aux::struct_equals((*this)->FMGL(value), other->
                                                       FMGL(value)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(Main__LogEntry other) {
        
        //#line 31 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(direction),
                                      other->FMGL(direction))) &&
        (x10aux::struct_equals((*this)->FMGL(order), other->
                                                       FMGL(order))) &&
        (x10aux::struct_equals((*this)->FMGL(key), other->
                                                     FMGL(key))) &&
        (x10aux::struct_equals((*this)->FMGL(value), other->
                                                       FMGL(value)));
        
    }
    Main__LogEntry Main__LogEntry____this__Main__LogEntry(
      ) {
        
        //#line 30 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Main.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    void __fieldInitializers_Main_LogEntry() {
     
    }
    
    static void _serialize(Main__LogEntry this_, x10aux::serialization_buffer& buf);
    
    static Main__LogEntry _deserialize(x10aux::deserialization_buffer& buf) {
        Main__LogEntry this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // MAIN__LOGENTRY_H

class Main__LogEntry;

#ifndef MAIN__LOGENTRY_H_NODEPS
#define MAIN__LOGENTRY_H_NODEPS
#ifndef MAIN__LOGENTRY_H_GENERICS
#define MAIN__LOGENTRY_H_GENERICS
#endif // MAIN__LOGENTRY_H_GENERICS
#endif // __MAIN__LOGENTRY_H_NODEPS
