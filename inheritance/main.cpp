#include <iostream>
#include <memory>
#include <list>
#include "volkswagen.h"
#include "astonmartin.h"


int main()
{
    std::list<std::shared_ptr<Car>> cars = { std::shared_ptr<Volkswagen>(new Volkswagen()),
                                             std::shared_ptr<AstonMartin>(new AstonMartin()) };

    for (auto car: cars)
    {
        std::cout << "Number of wheels: " << car->numberOfWheels() << "." << std::endl;
        car->accellerate();
        car->brake();
    }
    return 0;
}
