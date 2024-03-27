#pragma once
#include "Automobile.h"

class Car : public Automobile {
    public:

        Car(); //Constructor
        Car(const std::string& ptrVIN, const std::string& fuel, const std::string& body, const std::string& traction, const std::string& power, const std::string& extras);
        Car(const Car& other); //Copy Constructor
        Car& operator = (const Car& other); // Copy assignment operator
        Car(Car&& other) noexcept; //Move constructor
        Car& operator=(Car&& other) noexcept; //Move assignment
        ~Car();//Destructor

        void print() const;
};
