#include "TurbojetEngine.h"
#include <iostream>

TurbojetEngine::TurbojetEngine(const float _thrust, const std::string& _modelName, const float _power, const float _weight)
	: Engine(_modelName, _power, _weight), thrust(_thrust)
{
	this->Add();
}

void TurbojetEngine::Print() const
{
	Engine::Print();
	std::cout << "Thrust: " << thrust << std::endl;
}

void TurbojetEngine::SetThrust(const float _thrust)
{
	thrust = _thrust;
}

float TurbojetEngine::GetThrust() const
{
	return thrust;
}