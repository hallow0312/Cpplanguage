#include "Hydra.h"

void Hydra::Recovery()
{
	this->maxHP = 80;
	cout << "Hydra ü��ȸ�� " << endl;

	this->health = this->maxHP;
}

void Hydra::SetHP(int health)
{
	this->health = health;
}

int Hydra::GetHP()
{
	cout << "Hydra�� ü�� : " << this->health << endl;
	return 0;
}
