#include "Zerg.h"

void Zerg ::Recovery() 
{	
	this->health = this->maxHP;
}

void Zerg ::SetHP(int health) 
{
	this->health = health;
}

int Zerg::GetHP()
{
	cout << this->health << endl;
	return health;
}

Zerg::Zerg()
{
	cout << "Create Zerg" << endl;
}

Zerg::~Zerg()
{
	cout << "Release Zerg" << endl;
}
