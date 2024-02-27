#include "Bank.h"

void Bank::Withdrawal(Character& character, int money)
{	
	
	bankmoney += money;
	character.money -= money;
}

void Bank::Show()
{
	cout << "Bank Money : " << bankmoney << endl;
}

