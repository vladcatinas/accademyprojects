#pragma once
#include "Automobile.h"

class Moto : public Automobile {
    public:

        static bool instanceFlag; // Static flag to track instance creation

        static Moto* singleInstance; // Pointer to the single instance
        static Moto& getInstance(); // Static member function to get the instance

        Moto();
        
        ~Moto();
    
        void Dashboard();
        
};
