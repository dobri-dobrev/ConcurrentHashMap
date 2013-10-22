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
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/util/Pair.h>
#include <x10/util/Box.h>
#include <x10/lang/Exception.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>

//#line 14 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 15 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 16 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 17 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 18 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 19 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10FieldDecl_c

//#line 21 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10ConstructorDecl_c
void Hash::_constructor(x10_long defV) {
    
    //#line 21 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.AssignPropertyCall_c
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    Hash* this22460 = this;
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(POLL_TIME) = ((x10_long)2ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(h) = (x10aux::class_cast_unchecked<x10::util::HashMap<x10_long, x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(counter) = ((x10_long)0ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(defaultValue) = ((x10_long)0ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(buffer) = (x10aux::class_cast_unchecked<x10::lang::Rail<WorkRecord* >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this22460)->FMGL(isL) = false;
    
    //#line 22 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long) (((x10_int)0)));
    
    //#line 23 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(isL) = false;
    
    //#line 24 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = (__extension__ ({
        
        //#line 24 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_long, x10_long>* alloc11294 =  ((new (memset(x10aux::alloc<x10::util::HashMap<x10_long, x10_long> >(), 0, sizeof(x10::util::HashMap<x10_long, x10_long>))) x10::util::HashMap<x10_long, x10_long>()))
        ;
        
        //#line 24 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10ConstructorCall_c
        (alloc11294)->::x10::util::HashMap<x10_long, x10_long>::_constructor();
        alloc11294;
    }))
    ;
    
    //#line 26 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = defV;
    
    //#line 27 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = x10::lang::Rail<WorkRecord* >::_make(((x10_long) (((x10_int)8))));
}
Hash* Hash::_make(x10_long defV) {
    Hash* this_ = new (memset(x10aux::alloc<Hash>(), 0, sizeof(Hash))) Hash();
    this_->_constructor(defV);
    return this_;
}



//#line 39 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
x10_long Hash::put(x10_long key, x10_long value) {
    
    //#line 41 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long position = ((x10_long) (x10aux::nullCheck((x10aux::class_cast<x10::lang::Runtime__Worker*>(x10::lang::Thread::currentThread())))->
                                       FMGL(workerId)));
    
    //#line 42 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, (__extension__ ({
          
          //#line 42 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
          WorkRecord* alloc11295 =  ((new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord()))
          ;
          
          //#line 42 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10ConstructorCall_c
          (alloc11295)->::WorkRecord::_constructor(true, key, value);
          alloc11295;
      }))
      );
    
    //#line 43 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long brea = ((x10_long)500ll);
    
    //#line 44 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                        FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                      position))->
                                    FMGL(isDone), false)))
    {
        
        //#line 45 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(this->FMGL(isL), true)) &&
            ((brea) > (((x10_long)0ll)))) {
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret22461;
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Labeled_c
            goto __ret22462; __ret22462: {
            {
                
                //#line 144 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 145 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Thread::sleep(((x10_long)2ll));
                    
                    //#line 146 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                    ret22461 = true;
                    
                    //#line 146 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                    goto __ret22462_end_;
                }
                catch (x10::lang::CheckedThrowable* __exc26) {
                    if (x10aux::instanceof<x10::lang::InterruptedException*>(__exc26)) {
                        x10::lang::InterruptedException* e22463 =
                          static_cast<x10::lang::InterruptedException*>(__exc26);
                        {
                            
                            //#line 148 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                            ret22461 = false;
                            
                            //#line 148 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                            goto __ret22462_end_;
                        }
                    } else
                    throw;
                }
            }goto __ret22462_end_; __ret22462_end_: ;
            }
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Local_c
            ret22461;
            
            //#line 47 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
            brea = ((x10_long) ((brea) - (((x10_long)1ll))));
            }
            
        {
            
            //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable22470 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
            try {
                {
                    
                    //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::enterAtomic();
                    {
                        
                        //#line 52 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals(brea, ((x10_long)0ll))))
                        {
                            
                            //#line 53 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = false;
                        }
                        
                        //#line 54 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals(this->
                                                     FMGL(isL),
                                                   false)) &&
                            (x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                         FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                       position))->
                                                     FMGL(isDone),
                                                   false)))
                        {
                            
                            //#line 55 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = true;
                            
                            //#line 56 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                             FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                           position))->
                                                         FMGL(isDone),
                                                       false)))
                            {
                                
                                //#line 57 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                                this->executeTasks();
                            }
                            
                            //#line 58 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = false;
                        }
                        
                    }
                }
                
                //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc27) {
                if (true) {
                    x10::lang::CheckedThrowable* formal22471 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc27);
                    {
                        
                        //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable22470 = formal22471;
                    }
                } else
                throw;
            }
            
            //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable22470)))
            {
                
                //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable22470))
                {
                    
                    //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable22470));
                }
                
            }
            
            //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::exitAtomic();
            }
            
            //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable22470)))
            {
                
                //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable22470)))
                {
                    
                    //#line 51 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable22470));
                }
                
            }
            
        }
        }
        
    
    //#line 67 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long i = x10aux::nullCheck(x10aux::nullCheck(this->
                                                       FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                     position))->FMGL(id);
    
    //#line 68 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, x10aux::class_cast_unchecked<WorkRecord*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 69 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return i;
    }
    

//#line 86 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
x10::util::Pair<x10_long, x10_long> Hash::get(x10_long key) {
    
    //#line 88 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long position = ((x10_long) (x10aux::nullCheck((x10aux::class_cast<x10::lang::Runtime__Worker*>(x10::lang::Thread::currentThread())))->
                                       FMGL(workerId)));
    
    //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, (__extension__ ({
          
          //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
          WorkRecord* alloc11296 =  ((new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord()))
          ;
          
          //#line 89 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10ConstructorCall_c
          (alloc11296)->::WorkRecord::_constructor(false,
                                                   key, ((x10_long)0ll));
          alloc11296;
      }))
      );
    
    //#line 90 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                        position))->FMGL(isDone) = false;
    
    //#line 91 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long brea = ((x10_long)500ll);
    
    //#line 92 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10While_c
    while ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                        FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                      position))->
                                    FMGL(isDone), false)))
    {
        
        //#line 93 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(this->FMGL(isL), true)) &&
            ((brea) > (((x10_long)0ll)))) {
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret22464;
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Labeled_c
            goto __ret22465; __ret22465: {
            {
                
                //#line 144 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 145 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Thread::sleep(((x10_long)2ll));
                    
                    //#line 146 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                    ret22464 = true;
                    
                    //#line 146 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                    goto __ret22465_end_;
                }
                catch (x10::lang::CheckedThrowable* __exc29) {
                    if (x10aux::instanceof<x10::lang::InterruptedException*>(__exc29)) {
                        x10::lang::InterruptedException* e22466 =
                          static_cast<x10::lang::InterruptedException*>(__exc29);
                        {
                            
                            //#line 148 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10LocalAssign_c
                            ret22464 = false;
                            
                            //#line 148 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": polyglot.ast.Branch_c
                            goto __ret22465_end_;
                        }
                    } else
                    throw;
                }
            }goto __ret22465_end_; __ret22465_end_: ;
            }
            
            //#line 143 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/lang/System.x10": Eval of x10.ast.X10Local_c
            ret22464;
            
            //#line 95 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
            brea = ((x10_long) ((brea) - (((x10_long)1ll))));
            }
            
        {
            
            //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable22473 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
            try {
                {
                    
                    //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::enterAtomic();
                    {
                        
                        //#line 98 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals(brea, ((x10_long)0ll))))
                        {
                            
                            //#line 99 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = false;
                        }
                        
                        //#line 100 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals(this->
                                                     FMGL(isL),
                                                   false)) &&
                            (x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                         FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                       position))->
                                                     FMGL(isDone),
                                                   false)))
                        {
                            
                            //#line 101 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = true;
                            
                            //#line 102 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                             FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                           position))->
                                                         FMGL(isDone),
                                                       false)))
                            {
                                
                                //#line 103 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                                this->executeTasks();
                            }
                            
                            //#line 104 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                            this->FMGL(isL) = false;
                        }
                        
                    }
                }
                
                //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc30) {
                if (true) {
                    x10::lang::CheckedThrowable* formal22474 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc30);
                    {
                        
                        //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable22473 = formal22474;
                    }
                } else
                throw;
            }
            
            //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable22473)))
            {
                
                //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable22473))
                {
                    
                    //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable22473));
                }
                
            }
            
            //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::exitAtomic();
            }
            
            //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable22473)))
            {
                
                //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable22473)))
                {
                    
                    //#line 97 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable22473));
                }
                
            }
            
        }
        }
        
    
    //#line 112 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long i = x10aux::nullCheck(x10aux::nullCheck(this->
                                                       FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                     position))->FMGL(id);
    
    //#line 113 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10_long r = x10aux::nullCheck(x10aux::nullCheck(this->
                                                       FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                     position))->FMGL(result);
    
    //#line 114 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__set(
      position, x10aux::class_cast_unchecked<WorkRecord*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 115 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10::util::Pair<x10_long, x10_long> alloc22469 =  x10::util::Pair<x10_long, x10_long>::_alloc();
    
    //#line 21 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
    x10_long first22467 = i;
    
    //#line 21 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
    x10_long second22468 = r;
    
    //#line 22 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
    alloc22469->FMGL(first) = first22467;
    
    //#line 23 "/Users/dobridobrev/bin/x102/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
    alloc22469->FMGL(second) = second22468;
    
    //#line 115 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return alloc22469;
    }
    

//#line 119 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::executeTasks() {
    {
        
        //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable22476 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
        
        //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 121 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.For_c
                    {
                        x10_long i;
                        for (
                             //#line 121 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                             i = ((x10_long)0ll); ((i) < ((x10_long)(x10aux::nullCheck(this->
                                                                                         FMGL(buffer))->FMGL(size))));
                             
                             //#line 121 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                             i = ((x10_long) ((i) + (((x10_long)1ll)))))
                        {
                            
                            //#line 122 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                            if ((!x10aux::struct_equals(x10aux::nullCheck(this->
                                                                            FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                          i),
                                                        reinterpret_cast<x10::lang::NullType*>(X10_NULL))))
                            {
                                
                                //#line 123 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                                if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                 FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                               i))->
                                                             FMGL(isPut),
                                                           true)))
                                {
                                    
                                    //#line 124 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                                    if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                     FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                                   i))->
                                                                 FMGL(isDone),
                                                               false)))
                                    {
                                        
                                        //#line 126 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(id) = (__extension__ ({
                                            
                                            //#line 126 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                                            Hash* x22454 =
                                              this;
                                            
                                            //#line 126 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
                                            ;
                                            x10aux::nullCheck(x22454)->
                                              FMGL(counter) =
                                              ((x10_long) ((x10aux::nullCheck(x22454)->
                                                              FMGL(counter)) + (((x10_long)1ll))));
                                        }))
                                        ;
                                        
                                        //#line 128 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
                                        x10aux::nullCheck(this->
                                                            FMGL(h))->put(
                                          x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                              i))->
                                            FMGL(key), x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                             FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                           i))->
                                                         FMGL(value));
                                        
                                        //#line 129 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(isDone) = true;
                                    }
                                    
                                } else 
                                //#line 134 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
                                if ((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                 FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                               i))->
                                                             FMGL(isDone),
                                                           false)))
                                {
                                    
                                    //#line 136 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                                    x10::util::Box<x10_long>* boxedValue =
                                      x10aux::nullCheck(this->
                                                          FMGL(h))->get(
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(key));
                                    
                                    //#line 138 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Try_c
                                    try {
                                        
                                        //#line 139 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(result) = x10aux::nullCheck(boxedValue)->
                                                           FMGL(value);
                                        
                                        //#line 140 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(id) = (__extension__ ({
                                            
                                            //#line 140 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                                            Hash* x22456 =
                                              this;
                                            
                                            //#line 140 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
                                            ;
                                            x10aux::nullCheck(x22456)->
                                              FMGL(counter) =
                                              ((x10_long) ((x10aux::nullCheck(x22456)->
                                                              FMGL(counter)) + (((x10_long)1ll))));
                                        }))
                                        ;
                                        
                                        //#line 141 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                        x10aux::nullCheck(x10aux::nullCheck(this->
                                                                              FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                            i))->
                                          FMGL(isDone) = true;
                                    }
                                    catch (x10::lang::CheckedThrowable* __exc32) {
                                        if (x10aux::instanceof<x10::lang::Exception*>(__exc32)) {
                                            x10::lang::Exception* id__7 =
                                              static_cast<x10::lang::Exception*>(__exc32);
                                            {
                                                
                                                //#line 146 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                                x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                      FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                    i))->
                                                  FMGL(result) =
                                                  this->FMGL(defaultValue);
                                                
                                                //#line 147 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                                x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                      FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                    i))->
                                                  FMGL(id) =
                                                  (__extension__ ({
                                                    
                                                    //#line 147 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
                                                    Hash* x22458 =
                                                      this;
                                                    
                                                    //#line 147 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Empty_c
                                                    ;
                                                    x10aux::nullCheck(x22458)->
                                                      FMGL(counter) =
                                                      ((x10_long) ((x10aux::nullCheck(x22458)->
                                                                      FMGL(counter)) + (((x10_long)1ll))));
                                                }))
                                                ;
                                                
                                                //#line 148 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
                                                x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                      FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                                                    i))->
                                                  FMGL(isDone) =
                                                  true;
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
            
            //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc33) {
            if (true) {
                x10::lang::CheckedThrowable* formal22477 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc33);
                {
                    
                    //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable22476 = formal22477;
                }
            } else
            throw;
        }
        
        //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable22476))) {
            
            //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable22476))
            {
                
                //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable22476));
            }
            
        }
        
        //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                    throwable22476))) {
            
            //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable22476)))
            {
                
                //#line 120 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable22476));
            }
            
        }
        
    }
}

//#line 164 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::printBuffer() {
    
    //#line 165 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* s = x10aux::makeStringLit("");
    
    //#line 166 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 166 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long)0ll); ((i) < ((x10_long)(x10aux::nullCheck(this->
                                                                         FMGL(buffer))->FMGL(size))));
             
             //#line 166 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_long) ((i) + (((x10_long)1ll))))) {
            
            //#line 167 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10aux::nullCheck(this->
                                                           FMGL(buffer))->x10::lang::Rail<WorkRecord* >::__apply(
                                         i), reinterpret_cast<x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 168 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
                s = x10::lang::String::__plus(s, x10aux::makeStringLit("nada \n"));
            } else {
                
                //#line 171 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10LocalAssign_c
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
    
    //#line 175 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(s));
}

//#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
Hash* Hash::Hash____this__Hash() {
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": x10.ast.X10MethodDecl_c
void Hash::__fieldInitializers_Hash() {
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(POLL_TIME) = ((x10_long)2ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(h) = (x10aux::class_cast_unchecked<x10::util::HashMap<x10_long, x10_long>*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_long)0ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(defaultValue) = ((x10_long)0ll);
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = (x10aux::class_cast_unchecked<x10::lang::Rail<WorkRecord* >*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Hash.x10": Eval of x10.ast.X10FieldAssign_c
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
