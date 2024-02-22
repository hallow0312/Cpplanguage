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
	// 가상 함수의 경우 가상 함수 테이블을 사용하여 
	// 호출 된느 함수를 실행 시간에 결정하며, 정적으로 
	// 선언된 함순느 가상함수로 사용할 수 없다 .
	
	 virtual ~Mechanic(); 
	
		
};

