#pragma once
#include "Engine.h"
#ifndef ICENGINE
#define ICENGINE

// Двигатель внутреннего сгорания 
class ICEngine :
    public Engine
{
public:
    ICEngine() = default;
    ICEngine(const float _efficiency, const int _cylinders, const std::string& _modelName, const float _power, const float _weight);
    ~ICEngine() override = default;
    void Print() const override;

    void SetEfficiency(const float _efficiency);
    float GetEfficiency() const;

    void SetCylinders(const int cylindres);
    int GetCylinders() const;
private:
    float efficiency = 0; // КПД
    int cylinders = 0; // Количество цилиндров
};
#endif
