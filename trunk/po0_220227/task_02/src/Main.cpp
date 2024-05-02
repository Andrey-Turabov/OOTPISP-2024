#include <iostream>
#include <string>
#include "Engine.h"
#include "ICEngine.h"
#include "DieselEngine.h"
#include "TurbojetEngine.h"

int main()
{
	ICEngine first(30, 4, "first", 500, 100);
	DieselEngine second(100, 50, 6, "second", 800, 150);
	TurbojetEngine third(200, "third", 3000, 1000);
	Engine fourth;

	first.SetEfficiency(40);
	second.SetPower(900);
	third.SetWeight(1100);
	fourth.SetPower(700);
	fourth.SetModelName("fourth");
	fourth.SetWeight(200);
	fourth.Add();

	Engine::ShowEngines();
}