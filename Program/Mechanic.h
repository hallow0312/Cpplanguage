#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
private:
	int health;
	int attack;
public:
	Mechanic();
	
	virtual void Move();
	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ� 
	// ȣ�� �ȴ� �Լ��� ���� �ð��� �����ϸ�, �������� 
	// ����� �Լ��� �����Լ��� ����� �� ���� .
	
	 virtual ~Mechanic(); 
	
		
};

