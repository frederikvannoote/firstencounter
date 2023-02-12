#pragma once

#include <string>
#include <memory>
class Database;


class Handler
{
public:
    Handler(std::shared_ptr<Database> database);

    void handleOne(const std::string &identifier);

private:
    std::shared_ptr<Database> m_database;
};
