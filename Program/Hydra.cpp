#include "Hydra.h"

void Hydra::Recovery()
{
	this->maxHP = 80;
	cout << "Hydra 체력회복 " << endl;

	this->health = this->maxHP;
}

void Hydra::SetHP(int health)
{
	this->health = health;
}

int Hydra::GetHP()
{
	cout << "Hydra의 체력 : " << this->health << endl;
	return 0;
}
