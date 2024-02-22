#pragma once
#include"../Program/Mechanic.h"
class SiegeTank:public Mechanic 
{
	SiegeTank();
	~SiegeTank();
	virtual void Move() override;

};

