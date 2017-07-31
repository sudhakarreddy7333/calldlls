#include <nan.h>
#include "TestHeader.h"
NAN_METHOD(Add){
    TestDll::TestDllClass* Obj = new TestDll::TestDllClass();
    info.GetReturnValue().Set(Nan::New(Obj->TestDllFunc(2, 3)));
}
NAN_MODULE_INIT(Initialize){
    NAN_EXPORT(target,Add);
};
NODE_MODULE(addon,Initialize);