#include <iostream>
#include "Juggling.h"
#include "Lurker.h"
#include "Hydra.h"
#include "Beacon.h"
using namespace std;



int main()
{
#pragma region 업 캐스팅 

	Zerg * zerg = new Juggling();
	Beacon* beacon = new Beacon();
	zerg->SetHP(10);
	zerg->GetHP();
	beacon->Trigger(zerg);  
	zerg->GetHP();

	cout << endl;

	Zerg* hydra = new Hydra();
	hydra->SetHP(10);
	hydra->GetHP();
	beacon->Trigger(hydra);
	hydra->GetHP();

	cout <<  endl;

	Zerg* lurker = new Lurker();
	lurker->SetHP(10);
	lurker->GetHP();
	beacon->Trigger(lurker);
	lurker->GetHP();
	
	

#pragma endregion


	return 0;
}
















	















