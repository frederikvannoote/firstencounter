#include "handler.h"
#include "database.h"


Handler::Handler(std::shared_ptr<Database> database):
    m_database(database)
{
}

void Handler::handleOne(const std::string &identifier)
{
    m_database->doSomething(identifier);
}
