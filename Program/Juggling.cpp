#include "Juggling.h"

void Juggling::Recovery()
{
	this->maxHP= 35;
	cout << "Juggling ü��ȸ�� " << endl;
	this->health = maxHP;
}

void Juggling::SetHP(int health)
{
	this->health = health;
}

int Juggling::GetHP()
{
	cout << "Juggling�� ü�� : " << this->health << endl;
	return health;
}
