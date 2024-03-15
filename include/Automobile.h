#include <string>

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

class Automobile{

    protected:
        std::string VIN{0};
        std::string fuel{0};
        std::string body{0};
        std::string traction{0};
        std::string power{0};
        std::string extras{0};

    public:

        /* Default constructor */
        Automobile();

        ~Automobile();

        void Dashboard();
};
#endif 