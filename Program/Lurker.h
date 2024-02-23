#pragma once
#include "Zerg.h"
class Lurker :public Zerg
    
{
public:
	virtual void Recovery()override; 
	virtual void SetHP(int health) override;
	virtual int GetHP() override;

	  Lurker();
	 virtual ~Lurker(); 

};

