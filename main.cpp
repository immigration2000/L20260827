#include <iostream>

using namespace std;
class Character
{
public:
	CharacterInfo CharacterInfo;

	int Move();
	int Attack();
};

class Player : public Character
{

};

class Monster : public Character
{
	MonsterType MonsterType = Slime;
};

struct CharacterInfo
{
	int HP = 10;
	int Attack = 10;
	int Speed = 0;
}; 
enum MonsterType
{
	Slime,
	Goblin,
	WildBoar
};
enum job
{
	Warrior,
	Thief
};
int main()
{

	return 0;
}