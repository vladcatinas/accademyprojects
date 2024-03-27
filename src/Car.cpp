#include "Car.h"
#include <iostream>

Car::Car()
{
    std::cout<< "Car constructor called" <<std::endl;
}

Car::Car(const std::string& ptrVIN, const std::string& fuel, const std::string& body, const std::string& traction, const std::string& power, const std::string& extras) :
    Automobile(ptrVIN, fuel, body, traction, power, extras){}

Car::Car(const Car& other) : Automobile(other)
{

}

Car& Car::operator=(const Car& other)
{
    if (this != &other) {
        Automobile::operator=(other);
    }
    return *this;
}



Car::Car(Car&& other) noexcept : Automobile(std::move(other))
{

}

Car& Car::operator=(Car&& other) noexcept
{
    if (this != &other) {
        Automobile::operator=(std::move(other));
    }
    return *this;
}

Car::~Car()
{
    std::cout<< "Car destructor called" <<std::endl;
}

void Car::print() const {
    Dashboard();
}