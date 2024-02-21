#pragma once
#include"Mechanic.h"

class Goliath:public Mechanic
{
public:
	Goliath();
	
	void Move() override;
	
	~Goliath();
	
};

