#pragma once
#include <iostream>
using namespace std;

template<typename T>
class LinkedList
{
private:
	T data;
public:
	void Push(T data)
	{
		this->data = data;
	}
	T GetData()
	{
		return data;
	}
};

