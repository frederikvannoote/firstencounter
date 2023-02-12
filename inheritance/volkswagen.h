#pragma once

#include "car.h"


class Volkswagen: public Car
{
public:
    Volkswagen();

    virtual void accellerate() override;
    virtual void brake() override;
};
