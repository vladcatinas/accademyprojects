#pragma once
#include "Base.h"

class Car : public Base {
public:
    Car();
    void printInfo() const override;
};
