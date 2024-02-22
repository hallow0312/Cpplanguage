#include "Lurker.h"

void Lurker::Recovery()
{
	this->maxHP = 125;
	cout << "Lurker 체력회복 " << endl;

	this->health = this->maxHP;
}

void Lurker::SetHP(int health)
{
	this->health = health;
}

int Lurker::GetHP()
{
	cout << "Lurker의 체력 : " << this->health << endl;
	return 0;
}
