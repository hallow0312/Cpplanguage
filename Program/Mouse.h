#pragma once
#include<iostream>
using namespace std;

class Mouse
{
private:
	int click; 
public:
	Mouse()
	{
		cout << "Create Mouse" << endl;
	}
	void Ondrag()
	{
		cout << "Ondrag" << endl;
	}
	void Connect()
	{
		cout << "Mouse Connect" << endl;
	}
	~Mouse()
	{
		cout << "Release Mouse" << endl;
	}
};

