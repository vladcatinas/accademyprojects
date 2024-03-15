#include "Car.h"
#include <iostream>
Car::Car()
{
    std::cout<< "Car constructor called" <<std::endl;
}

Car::~Car()
{
    std::cout<< "Car destructor called" <<std::endl;
}

void Car::Dashboard()
{
    std::cout << "VIN number:" << VIN << std::endl;
    std::cout << "Fuel type:" << fuel << std::endl;
    std::cout << "Body type:" << body << std::endl;
    std::cout << "Traction type:" << traction << std::endl;
    std::cout << "Power:" << power << std::endl;
    std::cout << "Extras:" << extras << std::endl<<std::endl;  
}