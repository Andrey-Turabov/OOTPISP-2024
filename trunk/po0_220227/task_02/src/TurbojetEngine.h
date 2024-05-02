#pragma once
#include "Engine.h"
#ifndef TURBOJETENGINE
#define TURBOJETENGINE

// “урбореактивный двигатель
class TurbojetEngine :
    public Engine
{
public:
    TurbojetEngine() = default;
    TurbojetEngine(const float _thrust, const std::string& _modelName, const float _power, const float _weight);
    ~TurbojetEngine() override = default;
    void Print() const override;

    void SetThrust(const float _thrust);
    float GetThrust() const;

private:
    float thrust = 0; // “€га
};
#endif

