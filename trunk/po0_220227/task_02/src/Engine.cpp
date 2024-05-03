#include "Engine.h"
#include <iostream>

Engine::Engine(const std::string& _modelName, const float _power, const float _weight) :
	modelName(_modelName), power(_power), weight(_weight)
{
	this->Add();
}

void Engine::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}

void Engine::SetNext(Engine* _nextEngine)
{
	next = _nextEngine;
}

void Engine::Print() const
{
	std::cout << "Model: " << modelName << std::endl;
	std::cout << "Power: " << power << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}

void Engine::ShowEngines() {
	Engine* ptr = begin;

	while (ptr != nullptr)
	{
		ptr->Print();
		ptr = ptr->next;
		std::cout << std::endl;
	}
}

void Engine::SetModelName(std::string_view _modelName)
{
	modelName = _modelName;
}

std::string Engine::GetModelName() const 
{
	return modelName;
}

void Engine::SetPower(const float _power)
{
	power = _power;
}

float Engine::GetPower() const
{
	return power;
}

void Engine::SetWeight(const float _weight)
{
	weight = _weight;
}

float Engine::GetWeight() const
{
	return weight;
}

Engine* Engine::begin = nullptr;
Engine* Engine::last = nullptr;