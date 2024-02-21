#include <iostream>
#include"../Program/Goliath.h"
#include"../Program/SiegeTank.h"
#include"../Program/Vulture.h"
using namespace std;

void Circulator(char x, char y)
{
	cout << "char Function :" << (char)(x + y) << endl;
}
void Circulator(int x, int y)
{
	cout << "int Function :" << x + y << endl;

}

void Circulator(float x, float y)
{
	cout << "float Function :" << x + y << endl;

}
void Circulator(float x, float y, float z)
{
	cout << "float Function :" << x + y + z << endl;

}



int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 
	// 서로 다른 방법으로 처리할 수 있는 기법.

	// 다형성은 컴파일 시점에서 함수와 속성이 결정되는 
	// 정적 바인딩을 하지 않고 , 실행 시간에 함수와 
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 함 .


#pragma endregion

#pragma region 함수의 오버로딩

	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로 
	// 구분하여 여러 개를 선언할 수 있는 기능.
	/*
	Circulator('!','B');

	Circulator(10, 20);

	Circulator(10.5f, 20.5f);

	Circulator(10.5f, 20.5f, 30.5f);
	*/

	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 
	// 인수의 형태를 보고 호출 하므로 , 반환형으로 함수의 
	// 오버로딩은 생성할 수 없음.



#pragma endregion

#pragma region 함수의 오버라이딩

	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여 
	// 사용하는 기능.

	/*
	SiegeTank siegeTank;
	Vulture vulture;
	Goliath goliath;


	siegeTank.Move();
	vulture.Move();
	goliath.Move();
	*/

	// 함수의 오버라이드는 상속 관계에서만 이루어지며, 하위 
	// 클래스에서 함수를 재정의 할 때 상위 클래스의 함수 
	// 형태와 일치해야 함.

#pragma endregion

	return 0;
}




























