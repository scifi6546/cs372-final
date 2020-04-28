#include "catch.hpp"
#include "secret_agent.hpp"
#include "auth_proxy.hpp"
#include <cmath>

TEST_CASE("Circle dimension calculations") {
    std::shared_ptr<CustomerData> c1 = std::make_shared<SecretAgent>();
    REQUIRE(c1 -> getData() == "The Agents Name is Mr. Smith and He Lives in space!!!!!");
}

TEST_CASE("Authentication Proxy") {
    std::shared_ptr<CustomerData> c1 = std::make_shared<SecretAgent>();
    auto proxy = AuthenticationProxy(c1);
    REQUIRE(proxy.getData(0x1337) == "The Agents Name is Mr. Smith and He Lives in space!!!!!");
}