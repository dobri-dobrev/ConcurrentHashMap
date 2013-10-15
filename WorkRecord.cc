/*************************************************/
/* START of WorkRecord */
#include <WorkRecord.h>

#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>

//#line 3 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10FieldDecl_c

//#line 4 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10FieldDecl_c

//#line 5 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10FieldDecl_c

//#line 6 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10FieldDecl_c

//#line 7 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10FieldDecl_c

//#line 8 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10ConstructorDecl_c
void WorkRecord::_constructor(x10_boolean isEn, x10_long k, x10_long v) {
    
    //#line 8 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": polyglot.ast.Empty_c
    ;
    
    //#line 8 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.AssignPropertyCall_c
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10Call_c
    this->WorkRecord::__fieldInitializers_WorkRecord();
    
    //#line 10 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(isEnqueue) = isEn;
    
    //#line 11 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(key) = k;
    
    //#line 12 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = v;
    
    //#line 13 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(result) = ((x10_long)0ll);
}
WorkRecord* WorkRecord::_make(x10_boolean isEn, x10_long k, x10_long v) {
    WorkRecord* this_ = new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord();
    this_->_constructor(isEn, k, v);
    return this_;
}



//#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10MethodDecl_c
WorkRecord* WorkRecord::WorkRecord____this__WorkRecord() {
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": x10.ast.X10MethodDecl_c
void WorkRecord::__fieldInitializers_WorkRecord() {
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/WorkRecord.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(isDone) = false;
}
const x10aux::serialization_id_t WorkRecord::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(WorkRecord::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void WorkRecord::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(isEnqueue));
    buf.write(this->FMGL(key));
    buf.write(this->FMGL(value));
    buf.write(this->FMGL(isDone));
    buf.write(this->FMGL(result));
    
}

x10::lang::Reference* WorkRecord::_deserializer(x10aux::deserialization_buffer& buf) {
    WorkRecord* this_ = new (memset(x10aux::alloc<WorkRecord>(), 0, sizeof(WorkRecord))) WorkRecord();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void WorkRecord::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(isEnqueue) = buf.read<x10_boolean>();
    FMGL(key) = buf.read<x10_long>();
    FMGL(value) = buf.read<x10_long>();
    FMGL(isDone) = buf.read<x10_boolean>();
    FMGL(result) = buf.read<x10_long>();
}

x10aux::RuntimeType WorkRecord::rtt;
void WorkRecord::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("WorkRecord",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of WorkRecord */
/*************************************************/
