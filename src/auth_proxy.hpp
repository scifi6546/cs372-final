#ifndef AUTHPROXY_HPP
#define AUTHPROXY_HPP

#include <ostream>
#include <memory>
#include <vector>
#include "customer_data.hpp"
class AuthenticationProxy {
    public:
        AuthenticationProxy() = delete;
        AuthenticationProxy(std::shared_ptr<CustomerData> &data):_data(data){};
    
        std::string getData(unsigned long passcode) const;
    private:
        std::shared_ptr<CustomerData> _data;
};
#endif
