#pragma once
#include "Zerg.h"
class Juggling : public Zerg
{
public:
	virtual void Recovery() override;
	virtual void SetHP(int health) override;
	virtual int GetHP() override;

	 Juggling();
	virtual ~Juggling();

};

