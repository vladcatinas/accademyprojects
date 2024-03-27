#include <string>

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

class Automobile{

    protected:
        std::string* ptrVIN;
        std::string  fuel;
        std::string  body;
        std::string  traction;
        std::string  power;
        std::string  extras;

    public:

        /* Default constructor */
        Automobile();
        Automobile(const std::string& ptrVIN, const std::string& fuel, const std::string& body, const std::string& traction, const std::string& power, const std::string& extras);
        ~Automobile();
        void Dashboard() const;
};
#endif 