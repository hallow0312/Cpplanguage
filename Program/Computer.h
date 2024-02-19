#pragma once
#include "Mouse.h"
#include "Keyboard.h"
 

class Computer:public Mouse,public Keyboard
{
private:
	int computer;
public:
	Computer()
	{
		cout << "Create Computer" << endl << endl;
	}
	void Use()
	{
		Mouse::Connect();
		Keyboard::Connect();
		this->Ondrag();
		this->Typing();
		cout << "Use Computer" << endl;
	}
	~Computer()
	{
		cout << endl << "Release Computer" << endl;
	}
};

