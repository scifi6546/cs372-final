#include "auth_proxy.hpp"
std::string AuthenticationProxy::getData(unsigned long passcode)const{
    if(passcode==0x1337){
        return _data->getData();
    }else{
        return "ACCESS DENIED";
    }
}