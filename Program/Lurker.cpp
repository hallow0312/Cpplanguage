#include "Lurker.h"

void Lurker::Recovery()
{
	this->maxHP = 125;
	cout << "Lurker ü��ȸ�� " << endl;

	this->health = this->maxHP;
}

void Lurker::SetHP(int health)
{
	this->health = health;
}

int Lurker::GetHP()
{
	cout << "Lurker�� ü�� : " << this->health << endl;
	return 0;
}
