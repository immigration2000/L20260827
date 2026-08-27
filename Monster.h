#pragma once
#include "charater.h"

enum MonsterType
{
	WildBoar,
	Slime,
	Goblin
};

class AMonster : public Acharater
{
public:
	AMonster();
	~AMonster();

	MonsterType MonsterType = Slime;

private:

};



