#ifndef SECRET_AGENT
#define SECRET_AGENT
#include <ostream>
#include <memory>
#include <vector>
#include "customer_data.hpp"
class SecretAgent: public CustomerData {
public:
    SecretAgent(){};
    std::string getData() const;
};
#endif