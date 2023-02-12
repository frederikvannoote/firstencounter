#include "astonmartin.h"
#include <iostream>


AstonMartin::AstonMartin()
{
}

AstonMartin::~AstonMartin()
{
    std::cout << "Destructor of AstonMartin" << std::endl;
}

void AstonMartin::accellerate()
{
    std::cout << "AstonMartins have the best accelleration." << std::endl;
}

void AstonMartin::brake()
{
    std::cout << "Volkswagens have most powerful braking." << std::endl;
}
