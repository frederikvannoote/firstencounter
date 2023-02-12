#pragma once

class Car
{
public:
    Car();
    virtual ~Car();

    int numberOfWheels() const;

    virtual void accellerate() = 0;
    virtual void brake() = 0;
};
