#include <iostream>
#include <memory>
#include <thread>
#include "database.h"
#include "handler.h"


int main()
{
    std::shared_ptr<Database> database(new Database());
    std::shared_ptr<Handler> handler(new Handler(database));

    std::thread message1(&Handler::handleOne, handler, "Message 1");
    std::thread message2(&Handler::handleOne, handler, "Message 2");
    std::thread message3(&Handler::handleOne, handler, "Message 3");

    message1.join();
    message2.join();
    message3.join();

    return 0;
}
