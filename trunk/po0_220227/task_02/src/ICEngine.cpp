#include "ICEngine.h"
#include <iostream>

ICEngine::ICEngine(const float _efficiency, const int _cylinders, const std::string& _modelName, const float _power, const float _weight)
	: Engine(_modelName, _power, _weight), efficiency(_efficiency), cylinders(_cylinders)
{
	this->Add();
}

void ICEngine::Print() const
{
	Engine::Print();

	std::cout << "Efficiency: " << efficiency << std::endl;
	std::cout << "Cylinders: " << cylinders << std::endl;
}

void ICEngine::SetEfficiency(const float _efficiency)
{
	efficiency = _efficiency;
}

float ICEngine::GetEfficiency() const
{
	return efficiency;
}

void ICEngine::SetCylinders(const int _cylinders)
{
	cylinders = _cylinders;
}

int ICEngine::GetCylinders() const
{
	return cylinders;
}