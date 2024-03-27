#include <iostream>
#include <string>
#include <Car.h>
#include <Moto.h>
#include <Utility.h>

int main()
{
    /* Limitati numarul de obiecte ce pot fi create la 1 obiect pentru una dintre clase
    try {
        
        Moto& moto1 = Moto::getInstance();
        std::cout << "First instance of Moto created" << std::endl;

        Moto& moto2 = Moto::getInstance(); 
        std::cout << "Second instance of Moto created" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught " << std::endl;
    }
    */
   /* Implementati "Rule of three" si "Rule of five" pentru clasele derivate*/

    Car car1("WAUZZ8TXFKKKKKK", "Diesel","Break","FWD","999HP","EMPTY");
    car1.print();

    Car car2 = car1;
    car2.print();

    Car car3("WDD213452AD32", "Gasoline","Sedan","4matic","340hp","twin-turbo");
    car3 = std::move(car1); //Move assignment operator
    car3.print();

    Utility::print("Test");
    return 0;
}