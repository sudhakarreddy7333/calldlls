#include<iostream>
#include "nan.h"
	using namespace std;
        NAN_METHOD(HelloWorld){
            auto message = Nan::New<v8::String>("Hello world").ToLocalChecked();
            info.GetReturnValue().Set(message);
        }
    NAN_MODULE_INIT(Initialize){
        NAN_EXPORT(target,HelloWorld);
    }
    NODE_MODULE(addon, Initialize); 