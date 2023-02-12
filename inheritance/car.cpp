#include "car.h"
#include <iostream>


Car::Car()
{

}

Car::~Car()
{
    std::cout << "Destructor of car" << std::endl;
}

int Car::numberOfWheels() const
{
    return 4;
}
