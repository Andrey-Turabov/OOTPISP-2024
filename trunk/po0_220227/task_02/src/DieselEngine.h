#pragma once
#include "ICEngine.h"
#ifndef DIESELENGINE
#define DIESELENGINE

class DieselEngine :
    public ICEngine
{
public:
    DieselEngine() = default;
    DieselEngine(const float _torque, const float _efficiency, const int _cylinders, const std::string& _modelName, const float _power, const float _weight);
    ~DieselEngine() override = default;
    void Print() const override;

    void SetTorque(const float _torque);
    float GetTorque() const;
private:
    float torque = 0; // Крутящий момент
};
#endif

