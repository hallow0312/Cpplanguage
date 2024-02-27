#pragma once
#include <iostream>
using namespace std;

class Character
{private: 
	int money = 30000;

	friend class Bank;

public:
	void Show();

};

