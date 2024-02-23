#include <iostream>
#include "../Program/Circle.h"
#include "../Program/Rectangle.h"
using namespace std;



int main()
{
#pragma region 순수 가상 함수
	// 상위 클래스에 잇는 멤버 함수를 정의 하지 않고 
	// 하위 클래스에 재정의를 반드시 할 수 있도록 해주는 함수.

	//Pencil * pencil= new Circle();
	//pencil->Draw();
	//pencil = new Rectangle();
	//pencil->Draw();

	// 추상 클래스는 객체를 생성할 수 없음.

#pragma endregion



	return 0;
}
































