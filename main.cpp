#include <iostream>

#include "Player.h"
#include "Slime.h"
#include "Gobiln.h"
#include "WildBoar.h"

using namespace std;

int main()
{

	APlayer* MyPlayer = new APlayer();
	ASlime* Slimes = new ASlime[3];
	AGobiln* Gobilns = new AGobiln[5];
	AWildBoar* WildBoars = new AWildBoar[8];

	MyPlayer->Move();
	Slimes->Move();
	Gobilns->Move();
	WildBoars->Move();

	delete[] Slimes;
	Slimes = nullptr;
	delete[] Gobilns;
	Gobilns = nullptr;
	delete[] WildBoars;
	WildBoars = nullptr;
	
	
	return 0;
}