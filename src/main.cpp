#include <iostream>
#include <string>
#include <Car.h>
#include <Moto.h>
#include <Utility.h>

int main()
{
    Car a;

    try {
        // Create the first instance of Moto
        Moto& moto1 = Moto::getInstance();
        std::cout << "First instance of Moto created." << std::endl;

        // Try to create another instance of Moto
        // This should throw an exception since only one instance is allowed
        Moto& moto2 = Moto::getInstance(); // This line will throw an exception
        std::cout << "Second instance of Moto created." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }


    return 0;
}