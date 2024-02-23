#include "Lurker.h"

void Lurker::Recovery()
{
	maxHP = 125;
	cout << "Lurker 체력회복 " << endl;

	health = maxHP;
}

void Lurker::SetHP(int health)
{
	this->health = health;
}

int Lurker::GetHP()
{
	cout << "Lurker의 체력 : " << health << endl;
	return health;
}

Lurker::Lurker()
{
	cout << "Create Lurker" << endl;

}

Lurker::~Lurker()
{
	cout << "Release Lurker" << endl;
}

