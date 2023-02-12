#include <iostream>
#include <memory>
#include "database.h"
#include "handler.h"


int main()
{
    std::shared_ptr<Database> database(new Database());
    std::shared_ptr<Handler> handler(new Handler(database));

    handler->handleOne("Message 1");
    handler->handleOne("Message 2");
    handler->handleOne("Message 3");

    return 0;
}
