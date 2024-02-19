#pragma once
#include<iostream>
using namespace std;

class Keyboard
{
private:
	int button;
public:
	Keyboard()
	{
		cout <<"Create Keyboard" << endl;
	}
	void Typing()
	{
		
		cout << "Typing" << endl;
		
	}
	
	void Connect()
	{
		cout << "Keyboard Connect" << endl;
	}
	~Keyboard()
	{
		cout << "Release Keyboard" << endl;
	}
};

