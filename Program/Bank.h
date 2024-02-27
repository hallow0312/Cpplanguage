#pragma once
#include "Character.h"
class Bank
{
private:
	int bankmoney = 0;
public:
	void Withdrawal(Character & character,int money);

	void Show();



};

