#include <iostream>
#include "Vulture.h"
#include "Goliath.h"
#include "SiegeTank.h"


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
	int a = 5;
	int Factory;
	Mechanic* mechanic;
	cout << "Factory" << endl;
	cout << "0: 벌쳐 생성 1: 시즈탱크 생성 2: 골리앗 생성"<<endl;
	while (a!=0)
	{
		cin >> Factory;
		
		switch (Factory)
		{
		case 0: mechanic = new Vulture; 
			mechanic->Move();
			a--;
			break;
			
		case 1:  mechanic = new SiegeTank;
			mechanic->Move();
			a--;
			break;

		case 2:  mechanic = new Goliath;
			mechanic->Move();
			a--;
			break;
		default: 
			cout << "다시 입력 해주세요" << endl;
			
			break;
		}
		
	}
	if (a == 0)
	{
		cout <<endl<< "***모든 유닛을 생성하였습니다.***" << endl << endl;
	}

	


#pragma endregion



	return 0;
}
















	















