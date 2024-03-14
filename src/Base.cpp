#include <Base.h>
#include <iostream>

Base::Base() : VIN("1234567890"), fuel("Gasoline"), bodywork("Sedan"), traction("2WD"), power("100HP"), equipment("Basic")
{
    std::cout << "Base constructor called" << std::endl;
}

Base::Base(const Base &other) : VIN(other.VIN), fuel(other.fuel), bodywork(other.bodywork), traction(other.traction), power(other.power), equipment(other.equipment)
{
    std::cout << "Base copy constructor called" << std::endl;
}

Base &Base::operator=(const Base &other)
{
    if (this != &other)
    {
        VIN = other.VIN;
        fuel = other.fuel;
        bodywork = other.bodywork;
        traction = other.traction;
        power = other.power;
        equipment = other.equipment;
    }
    std::cout << "Base copy assignment operator called" << std::endl;
    return *this;
}

Base::Base(AbstractTrack &&other) noexcept : VIN(std::move(other.VIN)), fuel(std::move(other.fuel)), bodywork(std::move(other.bodywork)), traction(std::move(other.traction)), power(std::move(other.power)), equipment(std::move(other.equipment))
{
    std::cout << "Base move constructor called" << std::endl;
}

Base &Base::operator=(Base &&other) noexcept
{
    if (this != &other)
    {
        VIN = std::move(other.VIN);
        fuel = std::move(other.fuel);
        bodywork = std::move(other.bodywork);
        traction = std::move(other.traction);
        power = std::move(other.power);
        equipment = std::move(other.equipment);
    }
    std::cout << "Base move assignment operator called" << std::endl;
    return *this;
}

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;
}
