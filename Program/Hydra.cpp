#include "Hydra.h"

void Hydra::Recovery()
{
	maxHP = 80;
	cout << "Hydra 체력 회복 " << endl;

	health = maxHP;
}

void Hydra::SetHP(int health)
{
	this->health = health;
}

int Hydra::GetHP()
{
	cout << "Hydra의 체력 : " << health << endl;
	return health;
}

Hydra::Hydra()
{
	cout << "Create Hydra" << endl;
}

Hydra::~Hydra()
{
	cout << "Release Hydra" << endl;
}

