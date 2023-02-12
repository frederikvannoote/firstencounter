#include "database.h"
#include <iostream>


Database::Database()
{
}

void Database::doSomething(const std::string &identifier)
{
    std::cout << "Doing something with " << identifier << "." << std::endl;
}
