/*************************************************/
/* START of Hash */
#include <Hash.h>

#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Rail.h>
#include <WorkRecord.h>
#include <x10/lang/Runtime__Worker.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Thread.h>
#include <x10/lang/InterruptedException.h>
#include <x10/util/Pair.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/Box.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Exception.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>

//#line 13 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 14 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 15 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 16 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 17 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 18 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10FieldDecl_c

//#line 19 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10ConstructorDecl_c
void Hash::_constructor(x10_long defV) {
    
    //#line 19 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.AssignPropertyCall_c
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
    Hash* this22179 = this;
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(POLL_TIME) = ((x10_long)2ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(h) = (x10aux::class_cast_unchecked<x10::util::HashMap<x10_long, x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(counter) = ((x10_long)0ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(defaultValue) = ((x10_long)0ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(buffer) = (x10aux::class_cast_unchecked<x10::lang::Rail<WorkRecord* >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22179)->FMGL(isL) = false;
    
    //#line 20 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long) (((x10_int)0)));
    
    //#line 21 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(isL) = false;
    
    //#line 22 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = (__extension__ ({
        
        //#line 22 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_long, x10_long>* alloc11015 =  ((new (memset(x10aux::alloc<x10::util::HashMap<x10_long, x10_long> >(), 0, sizeof(x10::util::HashMap<x10_long, x10_long>))) x10::util::HashMap<x10_long, x10_long>()))
        ;
        
        //#line 22 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10ConstructorCall_c
        (alloc11015)->::x10::util::HashMap<x10_long, x10_long>::_constructor();
        alloc11015;
    }))
    ;
    
    //#line 23 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = defV;
    
    //#line 24 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = x10::lang::Rail<WorkRecord* >::_make(((x10_long) (((x10_int)8))));
}
Hash* Hash::_make(x10_long defV) {
    Hash* this_ = new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash();
    this_->_constructor(defV);
    return this_;
}



//#line 36 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
x10_long Hash::put(x10_long key, x10_long value) {
    
    //#line 38 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long position = ((x10_long) (x10aux::nullCheck((x10aux::class_cast<x10::lang::Runtime__Worker*>(x10::lang::Thread::currentThread())))->
                                       FMGL(workerId)));
    
    //#line 39 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, (__extension__ ({
          
          //#line 39 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
          WorkRecord* alloc11016 =  ((new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord()))
          ;
          
          //#line 39 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10ConstructorCall_c
          (alloc11016)->::WorkRecord::_constructor(true, key, value);
          alloc11016;
      }))
      );
    
    //#line 40 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                        FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                      position))->
                                    FMGL(result), ((x10_long)0ll))) &&
           this->FMGL(isL)) {
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": x10.ast.X10LocalDecl_c
        x10_boolean ret22180;
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Labeled_c
        goto __ret22181; __ret22181: {
        {
            
            //#line 144 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Try_c
            try {
                
                //#line 145 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Call_c
                x10::lang::Thread::sleep(((x10_long)2ll));
                
                //#line 146 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                ret22180 = true;
                
                //#line 146 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                goto __ret22181_end_;
            }
            catch (x10::lang::CheckedThrowable* __exc25) {
                if (x10aux::instanceof<x10::lang::InterruptedException*>(__exc25)) {
                    x10::lang::InterruptedException* e22182 =
                      static_cast<x10::lang::InterruptedException*>(__exc25);
                    {
                        
                        //#line 148 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                        ret22180 = false;
                        
                        //#line 148 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                        goto __ret22181_end_;
                    }
                } else
                throw;
            }
        }goto __ret22181_end_; __ret22181_end_: ;
        }
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Local_c
        ret22180;
        }
        
    
    //#line 43 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                     FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                   position))->
                                 FMGL(result), ((x10_long)0ll))))
    {
        
        //#line 44 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(isL) = true;
        
        //#line 45 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
        this->executeTasks();
        
        //#line 46 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(isL) = false;
    }
    
    //#line 50 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                               position))->FMGL(id);
    }
    

//#line 77 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
x10::util::Pair<x10_long, x10_long> Hash::get(x10_long key) {
    
    //#line 79 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long position = ((x10_long) (x10aux::nullCheck((x10aux::class_cast<x10::lang::Runtime__Worker*>(x10::lang::Thread::currentThread())))->
                                       FMGL(workerId)));
    
    //#line 80 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, (__extension__ ({
          
          //#line 80 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
          WorkRecord* alloc11017 =  ((new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord()))
          ;
          
          //#line 80 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10ConstructorCall_c
          (alloc11017)->::WorkRecord::_constructor(false,
                                                   key, ((x10_long)0ll));
          alloc11017;
      }))
      );
    
    //#line 81 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                        FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                      position))->
                                    FMGL(result), ((x10_long)0ll))) &&
           this->FMGL(isL)) {
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": x10.ast.X10LocalDecl_c
        x10_boolean ret22183;
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Labeled_c
        goto __ret22184; __ret22184: {
        {
            
            //#line 144 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Try_c
            try {
                
                //#line 145 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Call_c
                x10::lang::Thread::sleep(((x10_long)2ll));
                
                //#line 146 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                ret22183 = true;
                
                //#line 146 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                goto __ret22184_end_;
            }
            catch (x10::lang::CheckedThrowable* __exc27) {
                if (x10aux::instanceof<x10::lang::InterruptedException*>(__exc27)) {
                    x10::lang::InterruptedException* e22185 =
                      static_cast<x10::lang::InterruptedException*>(__exc27);
                    {
                        
                        //#line 148 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                        ret22183 = false;
                        
                        //#line 148 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                        goto __ret22184_end_;
                    }
                } else
                throw;
            }
        }goto __ret22184_end_; __ret22184_end_: ;
        }
        
        //#line 143 "/opt/x10/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Local_c
        ret22183;
        }
        
    
    //#line 85 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                     FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                   position))->
                                 FMGL(result), ((x10_long)0ll))))
    {
        
        //#line 86 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(isL) = true;
        
        //#line 87 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
        this->executeTasks();
        
        //#line 88 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(isL) = false;
    }
    
    //#line 91 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
    x10::util::Pair<x10_long, x10_long> alloc22188 =  x10::util::Pair<x10_long, x10_long>::_alloc();
    
    //#line 21 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
    x10_long first22186 = x10aux::nullCheck(x10aux::nullCheck(this->
                                                                FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                              position))->
                            FMGL(id);
    
    //#line 21 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
    x10_long second22187 = x10aux::nullCheck(x10aux::nullCheck(this->
                                                                 FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                               position))->
                             FMGL(result);
    
    //#line 22 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
    alloc22188->FMGL(first) = first22186;
    
    //#line 23 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
    alloc22188->FMGL(second) = second22187;
    
    //#line 91 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10Return_c
    return alloc22188;
    }
    

//#line 106 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::executeTasks() {
    
    //#line 107 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 107 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long)0ll); ((i) < ((x10_long)(x10aux::nullCheck(this->
                                                                         FMGL(buffer))->FMGL(size))));
             
             //#line 107 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_long) ((i) + (((x10_long)1ll))))) {
            
            //#line 108 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(x10aux::nullCheck(this->
                                                            FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                          i), reinterpret_cast<x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 109 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x10aux::nullCheck(this->
                                                          FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                        i))->FMGL(isPut))
                {
                    
                    //#line 110 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                     FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                   i))->
                                                 FMGL(result),
                                               ((x10_long)0ll))))
                    {
                        {
                            
                            //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
                            x10::lang::CheckedThrowable* throwable22189 =
                              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
                            
                            //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::enterAtomic();
                                    {
                                        
                                        //#line 112 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(id) = (__extension__ ({
                                            
                                            //#line 112 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
                                            Hash* x22175 =
                                              this;
                                            
                                            //#line 112 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Empty_c
                                            ;
                                            x10aux::nullCheck(x22175)->
                                              FMGL(counter) =
                                              ((x10_long) ((x10aux::nullCheck(x22175)->
                                                              FMGL(counter)) + (((x10_long)1ll))));
                                        }))
                                        ;
                                        
                                        //#line 113 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                                        x10aux::nullCheck(this->
                                                            FMGL(h))->put(
                                          x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                              i))->
                                            FMGL(key), x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                             FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                           i))->
                                                         FMGL(value));
                                        
                                        //#line 114 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(result) = ((x10_long)1ll);
                                    }
                                }
                                
                                //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::plausibleThrow();
                            }
                            catch (x10::lang::CheckedThrowable* __exc29) {
                                if (true) {
                                    x10::lang::CheckedThrowable* formal22190 =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc29);
                                    {
                                        
                                        //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                                        throwable22189 = formal22190;
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                        throwable22189)))
                            {
                                
                                //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                                if (x10aux::instanceof<x10::compiler::Abort*>(throwable22189))
                                {
                                    
                                    //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable22189));
                                }
                                
                            }
                            
                            //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::exitAtomic();
                            }
                            
                            //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                        throwable22189)))
                            {
                                
                                //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable22189)))
                                {
                                    
                                    //#line 111 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(throwable22189));
                                }
                                
                            }
                            
                        }
                    }
                    
                } else 
                //#line 119 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                 FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                               i))->
                                             FMGL(result),
                                           ((x10_long)0ll))))
                {
                    {
                        
                        //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable22192 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
                        
                        //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::enterAtomic();
                                {
                                    
                                    //#line 121 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
                                    x10::util::Box<x10_long>* boxedValue =
                                      x10aux::nullCheck(this->
                                                          FMGL(h))->get(
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(key));
                                    
                                    //#line 122 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                    x10aux::nullCheck(x10aux::nullCheck(this->
                                                                          FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                        i))->
                                      FMGL(id) = (__extension__ ({
                                        
                                        //#line 122 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
                                        Hash* x22177 = this;
                                        
                                        //#line 122 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Empty_c
                                        ;
                                        x10aux::nullCheck(x22177)->
                                          FMGL(counter) =
                                          ((x10_long) ((x10aux::nullCheck(x22177)->
                                                          FMGL(counter)) + (((x10_long)1ll))));
                                    }))
                                    ;
                                    
                                    //#line 123 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 124 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(result) = x10aux::nullCheck(boxedValue)->
                                                           FMGL(value);
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc30) {
                                        if (x10aux::instanceof<x10::lang::Exception*>(__exc30)) {
                                            x10::lang::Exception* id__6 =
                                              static_cast<x10::lang::Exception*>(__exc30);
                                            {
                                             
                                            }
                                        } else
                                        throw;
                                    }
                                }
                            }
                            
                            //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc31) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal22193 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc31);
                                {
                                    
                                    //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable22192 = formal22193;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                    throwable22192)))
                        {
                            
                            //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable22192))
                            {
                                
                                //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable22192));
                            }
                            
                        }
                        
                        //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::exitAtomic();
                        }
                        
                        //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                    throwable22192)))
                        {
                            
                            //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable22192)))
                            {
                                
                                //#line 120 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable22192));
                            }
                            
                        }
                        
                    }
                }
                
            }
            
        }
    }
    
}

//#line 138 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::printBuffer() {
    
    //#line 139 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* s = x10aux::makeStringLit("");
    
    //#line 140 "/home/dhd2110/ConcurrentHashMap/Hash.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 140 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long)0ll); ((i) < ((x10_long)(x10aux::nullCheck(this->
                                                                         FMGL(buffer))->FMGL(size))));
             
             //#line 140 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_long) ((i) + (((x10_long)1ll))))) {
            
            //#line 141 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10aux::nullCheck(this->
                                                           FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                         i), reinterpret_cast<x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 142 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                s = x10::lang::String::__plus(s, x10aux::makeStringLit("nada \n"));
            } else {
                
                //#line 145 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                s = x10::lang::String::__plus(s, x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(i, x10aux::makeStringLit(": ")), x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                                                                                                                                                                          FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                                                                                                                                                                                        i))->
                                                                                                                                                                                                                      FMGL(key)), x10aux::makeStringLit(", ")), x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                                                                                                                                                                                                                      FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                                                                                                                                                                                                                                    i))->
                                                                                                                                                                                                                                                                  FMGL(value)), x10aux::makeStringLit("\n")));
            }
            
        }
    }
    
    //#line 149 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(s));
}

//#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
Hash* Hash::Hash____this__Hash() {
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::__fieldInitializers_Hash() {
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(POLL_TIME) = ((x10_long)2ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = (x10aux::class_cast_unchecked<x10::util::HashMap<x10_long, x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long)0ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = ((x10_long)0ll);
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = (x10aux::class_cast_unchecked<x10::lang::Rail<WorkRecord* >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 11 "/home/dhd2110/ConcurrentHashMap/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(isL) = false;
}
const x10aux::serialization_id_t Hash::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Hash::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Hash::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(POLL_TIME));
    buf.write(this->FMGL(h));
    buf.write(this->FMGL(counter));
    buf.write(this->FMGL(defaultValue));
    buf.write(this->FMGL(buffer));
    buf.write(this->FMGL(isL));
    
}

x10::lang::Reference* Hash::_deserializer(x10aux::deserialization_buffer& buf) {
    Hash* this_ = new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Hash::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(POLL_TIME) = buf.read<x10_long>();
    FMGL(h) = buf.read<x10::util::HashMap<x10_long, x10_long>*>();
    FMGL(counter) = buf.read<x10_long>();
    FMGL(defaultValue) = buf.read<x10_long>();
    FMGL(buffer) = buf.read<x10::lang::Rail<WorkRecord* >*>();
    FMGL(isL) = buf.read<x10_boolean>();
}

x10aux::RuntimeType Hash::rtt;
void Hash::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Hash",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Hash */
/*************************************************/
