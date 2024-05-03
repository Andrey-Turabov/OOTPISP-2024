#pragma once
#include <string>
#ifndef ENGINEH
#define ENGINEH

class Engine
{
public:
	Engine() = default;
	Engine(const std::string& _modelName, const float _power, const float _weight);
	virtual ~Engine() = default;

	void Add();
	void SetNext(Engine* _nextEngine);

	virtual void Print() const;
	static void ShowEngines();

	void SetModelName(std::string_view _modelName);
	std::string GetModelName() const;

	void SetPower(const float _power);
	float GetPower() const;
	
	void SetWeight(const float _weight);
	float GetWeight() const;
private:
	std::string modelName = "";
	float power = 0;
	float weight = 0;
	Engine* next = nullptr;
protected:
	static Engine* begin;
	static Engine* last;
};
#endif 


