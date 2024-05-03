#include "DieselEngine.h"
#include <iostream>

DieselEngine::DieselEngine(const float _torque, const float _efficiency, const int _cylinders, const std::string& _modelName, const float _power, const float _weight)
	: ICEngine(_efficiency,_cylinders,_modelName, _power, _weight), torque(_torque)
{
	this->Add();
}

void DieselEngine::Print() const
{
	ICEngine::Print();
	std::cout << "Torque: " << torque << std::endl;
}

void DieselEngine::SetTorque(const float _torque)
{
	torque = _torque;
}

float DieselEngine::GetTorque() const
{
	return torque;
}