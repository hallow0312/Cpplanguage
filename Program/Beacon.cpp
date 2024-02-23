#include "Beacon.h"

void Beacon::Trigger(Zerg * zerg)
{	
	zerg->Recovery();   
	
}

Beacon::Beacon()
{
	cout << "Create Beacon " << endl<<endl;
}

Beacon::~Beacon()
{
	cout << endl<<"Release Beacon " << endl;
}

	
