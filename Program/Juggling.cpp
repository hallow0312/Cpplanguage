#include "Juggling.h"

void Juggling::Recovery()
{
	maxHP= 35;
	cout << "Juggling 체력회복 " << endl;
	health = maxHP;
}

void Juggling::SetHP(int health)
{
	this->health = health;
}

int Juggling::GetHP()
{
	cout << "Juggling의 체력 : " << health << endl;
	return health;
}

Juggling::Juggling()
{
	cout << "Create Juggling " << endl;
}

Juggling::~Juggling()
{
	cout << "Release Juggling" << endl;
}
