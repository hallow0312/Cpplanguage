#include <iostream>
#include "Bank.h"
#include "LinkedList.h"
using namespace std;
template <typename T>



void Calculator(T x, T y)
{
	cout << "x + y : " << x + y << endl;

}
template<>
void Calculator(char x, char y)
{
	cout << "x 의 값 : " << x << endl;
	cout << "y 의 값 : " << y << endl;

}

int main()
{

#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 , 하나의 값이 여러 
	// 다른 데이터 타입들을 가질 수 있는 기술에 중점을 
	// 두어 재사용성을 높일 수 있는 기능 .
	
	/*
	Calculator(10,20);

	Calculator(10.5f, 20.7f);
	
	Calculator('A','B');

	LinkedList<int> linkedlist;
	linkedlist.Push(1000);
	
	cout << linkedlist.GetData() << endl;
	
	*/


	





#pragma endregion

#pragma region Friend
	// Friend 로 선언된 클래스의 private 및 protected 멤버에 
	// 접근 할 수 있도록 설정해주는 기능 .

	/*
	Character character;
	character.Show();
	Bank bank;
	
	bank.Withdrawal(character, 15000);
	
	bank.Show();
	character.Show();
	*/

#pragma endregion

#pragma region 등비수열 
	/*
	int firstTerm; // 첫항 a 
	int different; // 공비 r
	int n;
	int x = 0;
	int y = 0;
	cout << "첫 항의 값 : ";

	cin >> firstTerm;

	cout << endl << "공 비 :";

	cin >> different;

	cout << endl << "횟 수 :";

	cin >> n;

	for (int i = 0; i <n; i++)
	{	
		
		if (i == 0)
		{
			x = firstTerm;
		}
		else
		{
			x = y * different;
		}
		 y = x;
		cout << x <<" ";

	}

	*/
#pragma endregion









	return 0;
}


















	















