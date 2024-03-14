#include "Car.h"
#include <iostream>

Car::Car() {
    std::cout << "Car constructor called" << std::endl;
}

void Car::printInfo() const {
    std::cout << "Car Information:" << std::endl;
    std::cout << "VIN: " << VIN << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Bodywork: " << bodywork << std::endl;
    std::cout << "Traction: " << traction << std::endl;
    std::cout << "Power: " << power << std::endl;
    std::cout << "Equipment: " << equipment << std::endl;
}