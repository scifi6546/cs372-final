#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <ostream>
#include <memory>
#include <vector>
class CustomerData {
public:
    virtual std::string getData() const = 0;
};
#endif
