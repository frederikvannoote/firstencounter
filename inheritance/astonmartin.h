#pragma once

#include "car.h"


class AstonMartin: public Car
{
public:
    AstonMartin();
    virtual ~AstonMartin();

    virtual void accellerate() override;
    virtual void brake() override;
};
