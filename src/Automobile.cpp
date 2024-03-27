#include "Automobile.h"
#include <iostream>

Automobile::Automobile() : ptrVIN(new std::string("WAUZZZ8TXFA01234")), fuel("Diesel"), body("Sportback"), traction("AWD"), power("250 kW"), extras("Keyless go entry")
{
    
    std::cout<< "Automobile constructor called" <<std::endl;
}

Automobile::Automobile(const std::string& ptrVIN, const std::string& fuel, const std::string& body, const std::string& traction, const std::string& power, const std::string& extras) :
    ptrVIN(new std::string(ptrVIN)), fuel(fuel), body(body), traction(traction), power(power), extras(extras) {}

Automobile::~Automobile()
{
    delete ptrVIN;
    std::cout<< "Automobile destructor called" <<std::endl;

}

void Automobile::Dashboard() const
{
    std::cout << "VIN number:" << ptrVIN << std::endl;
    std::cout << "Fuel type:" << fuel << std::endl;
    std::cout << "Body type:" << body << std::endl;
    std::cout << "Traction type:" << traction << std::endl;
    std::cout << "Power:" << power << std::endl;
    std::cout << "Extras:" << extras << std::endl;
}