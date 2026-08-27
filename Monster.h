#pragma once
#include "charater.h"
#include "enum.h"

class AMonster : public Acharater
{
public:
	AMonster();
	~AMonster();

	MonsterType MonsterType = Slime;

private:

};



