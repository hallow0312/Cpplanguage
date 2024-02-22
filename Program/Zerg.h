#pragma once
#include<iostream>
using namespace std;
class Zerg
{protected:
	int health=0;
	int maxHP=0;
public: 
	virtual void Recovery();
	virtual void SetHP(int health);
	virtual int GetHP();
};

