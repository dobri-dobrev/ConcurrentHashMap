/*************************************************/
/* START of Hash */
#include <Hash.h>

#include <x10/lang/Long.h>
#include <x10/util/HashMap.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Rail.h>
#include <Entry.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime.h>
#include <x10/util/Box.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Pair.h>
#include <x10/lang/Exception.h>

//#line 13 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 14 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 15 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 16 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 17 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10ConstructorDecl_c
void Hash::_constructor(x10_long defV) {
    
    //#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
    ;
    
    //#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.AssignPropertyCall_c
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    this->Hash::__fieldInitializers_Hash();
    
    //#line 20 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long) (((x10_int)0)));
    
    //#line 21 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = x10::util::HashMap<x10_long, x10_long>::_make();
    
    //#line 22 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = defV;
    
    //#line 23 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(pending) = x10::util::ArrayList<x10_long>::_make();
}
Hash* Hash::_make(x10_long defV) {
    Hash* this_ = new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash();
    this_->_constructor(defV);
    return this_;
}



//#line 35 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
x10_long Hash::put(x10_long key, x10_long value) {
    
    //#line 37 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long r = ((x10_long)-1ll);
    {
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable1910 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 40 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                    r = (__extension__ ({
                        
                        //#line 40 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                        Hash* x1906 = this;
                        
                        //#line 40 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
                        ;
                        x10aux::nullCheck(x1906)->FMGL(counter) = ((x10_long) ((x10aux::nullCheck(x1906)->
                                                                                  FMGL(counter)) + (((x10_long)1ll))));
                    }))
                    ;
                    
                    //#line 41 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(h))->put(key, value);
                }
            }
            
            //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc25) {
            if (true) {
                x10::lang::CheckedThrowable* formal1911 = static_cast<x10::lang::CheckedThrowable*>(__exc25);
                {
                    
                    //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable1910 = formal1911;
                }
            } else
            throw;
        }
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable1910))) {
            
            //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable1910))
            {
                
                //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable1910));
            }
            
        }
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable1910))) {
            
            //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable1910)))
            {
                
                //#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable1910));
            }
            
        }
        
    }
    
    //#line 44 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return r;
    
}

//#line 56 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
x10::util::Pair<x10_long, x10_long> Hash::get(x10_long key) {
    
    //#line 58 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long i = ((x10_long)-1ll);
    
    //#line 59 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long value = this->FMGL(defaultValue);
    {
        
        //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable1913 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
        
        //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                    i = (__extension__ ({
                        
                        //#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                        Hash* x1908 = this;
                        
                        //#line 62 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
                        ;
                        x10aux::nullCheck(x1908)->FMGL(counter) =
                          ((x10_long) ((x10aux::nullCheck(x1908)->
                                          FMGL(counter)) + (((x10_long)1ll))));
                    }))
                    ;
                    
                    //#line 63 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                    x10::util::Box<x10_long>* boxedValue =
                      x10aux::nullCheck(this->FMGL(h))->get(
                        key);
                    
                    //#line 64 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 65 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                        value = x10aux::nullCheck(boxedValue)->x10::util::Box<x10_long>::__apply();
                    }
                    catch (x10::lang::CheckedThrowable* __exc27) {
                        if (x10aux::instanceof<x10::lang::Exception*>(__exc27)) {
                            x10::lang::Exception* id__6 =
                              static_cast<x10::lang::Exception*>(__exc27);
                            {
                             
                            }
                        } else
                        throw;
                    }
                }
            }
            
            //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc28) {
            if (true) {
                x10::lang::CheckedThrowable* formal1914 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc28);
                {
                    
                    //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable1913 = formal1914;
                }
            } else
            throw;
        }
        
        //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable1913))) {
            
            //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable1913))
            {
                
                //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable1913));
            }
            
        }
        
        //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable1913))) {
            
            //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable1913)))
            {
                
                //#line 61 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable1913));
            }
            
        }
        
    }
    
    //#line 69 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return x10::util::Pair<x10_long, x10_long>::_make(i, value);
    
}

//#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
Hash* Hash::Hash____this__Hash() {
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::__fieldInitializers_Hash() {
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = (x10aux::class_cast_unchecked<x10::util::HashMap<x10_long, x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long)0ll);
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = ((x10_long)0ll);
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(pending) = (x10aux::class_cast_unchecked<x10::util::ArrayList<x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(map) = (x10aux::class_cast_unchecked<x10::lang::Rail<Entry* >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
}
const x10aux::serialization_id_t Hash::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Hash::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Hash::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(h));
    buf.write(this->FMGL(counter));
    buf.write(this->FMGL(defaultValue));
    buf.write(this->FMGL(pending));
    buf.write(this->FMGL(map));
    
}

x10::lang::Reference* Hash::_deserializer(x10aux::deserialization_buffer& buf) {
    Hash* this_ = new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Hash::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(h) = buf.read<x10::util::HashMap<x10_long, x10_long>*>();
    FMGL(counter) = buf.read<x10_long>();
    FMGL(defaultValue) = buf.read<x10_long>();
    FMGL(pending) = buf.read<x10::util::ArrayList<x10_long>*>();
    FMGL(map) = buf.read<x10::lang::Rail<Entry* >*>();
}

x10aux::RuntimeType Hash::rtt;
void Hash::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Hash",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Hash */
/*************************************************/
