#include <iostream>
#include "../Program/Vulture.h"
#include "../Program/Goliath.h"





using namespace std;

int main()
{
#pragma region 가상함수
	// 상속 하는 클래스 내에서 같은 형태의 함수로 
	// 재정의 될 수 있는 함수 .

	//Mechanic* mechanic = new Vulture();
	//cout << endl;
	//mechanic->Move();
	//// 가상 함수 실행 시간에 상위 클래스에 대한 참조로 
	//// 하위 클래스에 재정의 된 함수를 호출 할 수 있음.

	//cout << "Mechanic 의 크기 : " << sizeof(Mechanic) << endl;

	//  가상 함수는 한개 이상의 가상 함수를 포함하는 클래스가 있을 때 
	// 객체 주소에 가상 함수 테이블을 추가함.

#pragma endregion

#pragma region Factory

	// 0 : 벌처 1: 시즈탱크 2: 골리앗  입력은 5번
	/*
	int count = 5;
	int Factory;
	Mechanic* mechanic=nullptr;
	cout << "Factory" << endl;
	cout << "0: 벌쳐 생성 1: 시즈탱크 생성 2: 골리앗 생성"<<endl;
	while (count!=0)
	{

		cin >> Factory;
		switch (Factory)
		{
		case 0: mechanic = new Vulture();

			count--;
			break;

		case 1:  mechanic = new SiegeTank();

			count--;
			break;

		case 2:  mechanic = new Goliath();

			count--;
			break;
		default:
			cout << "다시 입력 해주세요" << endl;

			continue;
		}

	}
	if (count == 0)
	{
		cout <<endl<< "*** 모든 유닛을 생성하였습니다.***" << endl << endl;
	}

	*/


#pragma endregion

#pragma region 가상 소멸자 
	// 객체가 소멸 될 때 현재 참조하고 있는 객체와 상관없이 
	// 모두 호출되는 소멸자.

	Mechanic* unit1 = new Vulture();
	cout << endl;
	delete unit1;

	// 상속된 객체가 해제가 될 때 하위 클래스의 소멸자가 먼저 
	// 실행이 되고 상위 클래스의 소멸자가 실행되어야하기에 
	// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 
	// 소멸 시켜야 함.



#pragma endregion



	return 0;
}
































