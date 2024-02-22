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
	return 0;
}
