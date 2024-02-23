#pragma once
#include "Zerg.h"
class Hydra :public Zerg
    
{
public:
	
	virtual void Recovery()override;
	virtual void SetHP(int health)override;
	virtual int GetHP()override;

	Hydra();
	virtual ~Hydra();

};


