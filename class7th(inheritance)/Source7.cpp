#include <iostream>
#include <stdarg.h>
#include "../Program/Marine.h"
#include "../Program/Computer.h"
using namespace std;



void Debug(int count, ...) //count 수만큼 매개변수가 들어감. +)count가 몇인지 모르기에 '...' 사용
{
	// va_list: 가변 인자 목록으로 가변인자의 메모리 주소를 저장하는 포인터.

	va_list vaList; //가변 인자 목록 포인터

	//va_start: 가변 인자의 시작 주소를 가져오는 변수

	va_start(vaList, count); // 가변 인자 목록 포인터 설정 

	//va_arg: 가변 인자 포인터에서 특정 자료형의 크기만큼 값을 꺼내고 이동하는 변수이고,
	//		  값을 반환하는 변수.
	for (int i = 0; i < count; i++)
	{
		// int 크기 만큼 가변 인자 목록 포인터에서 값을 반환.
		cout << va_arg(vaList, int) << " ";
	}

	// va_end: 가변 인자 처리가 끝났을 때 포인터를 NULL 로 초기화 하는 변수.

	va_end(vaList); // 가변 인자 목록 포인터를 NULL 로 초기화 함.


}








int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능.
	/*
	Unit unit;

	cout << "unit 오브젝트의 크기 : " << sizeof(unit) << endl<<endl;

	Marine marine;

	cout << "marine 오브젝트의 크기 : " << sizeof(marine) << endl;
	*/

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 
	// 사용할 수 없으며, 하위 클래스는 상위 클래스의 메모리를 포함한 상태로
	// 메모리의 크기가 결정됨.




#pragma endregion

#pragma region 다중 상속
	// 하나의 하위 클래스가 여러개의 상위 클래스를
	// 상속 받는것.

	//Computer computer;
	//computer.Use();

	// 다중 상속은 여러개의 상위 클래스에 중복되는 속성이
	// 존재 할 수 있기 때문에 범위 지정연산자를 통해 
	// 상위 클래스의 이름을 선언하고 속성을 사용해야함.

#pragma endregion

#pragma region 가변 길이 매개변수
	/*
	Debug(1, 10);

	cout << endl;

	Debug(2, 10,20);

	cout << endl;

	Debug(3, 10,20,30);

	cout << endl;

	Debug(4, 10,20,30,40);

	cout << endl;

	Debug(5, 10,20,30,40,50);

	cout << endl;
	*/

#pragma endregion


	return 0;
}



















