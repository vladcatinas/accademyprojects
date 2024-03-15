#include "Moto.h"
#include <iostream>

bool Moto::instanceFlag = false;
Moto* Moto::singleInstance = nullptr;

Moto::Moto()
{
    std::cout<< "Moto constructor called" <<std::endl;
}

Moto::~Moto()
{
    std::cout<< "Moto destructor called" <<std::endl;
}

void Moto::Dashboard()
{
    std::cout << "VIN number:" << VIN << std::endl;
    std::cout << "Fuel type:" << fuel << std::endl;
    std::cout << "Body type:" << body << std::endl;
    std::cout << "Traction type:" << traction << std::endl;
    std::cout << "Power:" << power << std::endl;
    std::cout << "Extras:" << extras << std::endl<<std::endl;  
}


Moto& Moto::getInstance() {
    if (!instanceFlag) {
        singleInstance = new Moto();
        instanceFlag = true;
        return *singleInstance;
    } else {
        throw std::runtime_error("Only one instance of Moto is allowed.");
    }
}