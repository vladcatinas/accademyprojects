#include "Automobile.h"
#include <iostream>

Automobile::Automobile() : VIN("WAUZZZ8TXFA01234"), fuel("Diesel"), body("Sportback"), traction("AWD"), power("250 kW"), extras("Keyless go entry")
{
    
    std::cout<< "Automobile constructor called" <<std::endl;
}

Automobile::~Automobile()
{
    std::cout<< "Automobile destructor called" <<std::endl;

}

void Automobile::Dashboard()
{
    std::cout << "VIN number:" << VIN << std::endl;
    std::cout << "Fuel type:" << fuel << std::endl;
    std::cout << "Body type:" << body << std::endl;
    std::cout << "Traction type:" << traction << std::endl;
    std::cout << "Power:" << power << std::endl;
    std::cout << "Extras:" << extras << std::endl;
}