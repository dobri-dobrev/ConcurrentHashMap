/*************************************************/
/* START of Entry */
#include <Entry.h>

#include <x10/lang/Long.h>

//#line 2 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10FieldDecl_c

//#line 3 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10FieldDecl_c

//#line 4 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10ConstructorDecl_c
void Entry::_constructor(x10_long k, x10_long v) {
    
    //#line 4 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": polyglot.ast.Empty_c
    ;
    
    //#line 4 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.AssignPropertyCall_c
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10Call_c
    this->Entry::__fieldInitializers_Entry();
    
    //#line 5 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(key) = k;
    
    //#line 6 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = v;
}
Entry* Entry::_make(x10_long k, x10_long v) {
    Entry* this_ = new (memset(x10aux::alloc<Entry>(), 0, sizeof(Entry))) Entry();
    this_->_constructor(k, v);
    return this_;
}



//#line 8 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10MethodDecl_c
void Entry::setValue(x10_long v) {
    
    //#line 9 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = v;
}

//#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10MethodDecl_c
Entry* Entry::Entry____this__Entry() {
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": x10.ast.X10MethodDecl_c
void Entry::__fieldInitializers_Entry() {
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(key) = ((x10_long)0ll);
    
    //#line 1 "/Users/dobridobrev/Documents/senior year/parallel/hw2/Entry.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(value) = ((x10_long)0ll);
}
const x10aux::serialization_id_t Entry::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Entry::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Entry::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(key));
    buf.write(this->FMGL(value));
    
}

x10::lang::Reference* Entry::_deserializer(x10aux::deserialization_buffer& buf) {
    Entry* this_ = new (memset(x10aux::alloc<Entry>(), 0, sizeof(Entry))) Entry();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Entry::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(key) = buf.read<x10_long>();
    FMGL(value) = buf.read<x10_long>();
}

x10aux::RuntimeType Entry::rtt;
void Entry::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Entry",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Entry */
/*************************************************/
