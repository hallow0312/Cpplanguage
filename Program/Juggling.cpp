#include "Juggling.h"

void Juggling::Recovery()
{
	this->maxHP= 35;
	cout << "Juggling 체력회복 " << endl;
	this->health = maxHP;
}

void Juggling::SetHP(int health)
{
	this->health = health;
}

int Juggling::GetHP()
{
	cout << "Juggling의 체력 : " << this->health << endl;
	return health;
}
