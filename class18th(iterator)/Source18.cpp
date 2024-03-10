#include <iostream>
#include <list>
#include <string>
using namespace std;




int main()
{
#pragma region 반복자

	//std::list<int> list;
	//
	//list.push_back(10);
	//list.push_back(20);
	//list.push_back(30);
	//
	//list.push_front(60);
	//list.push_front(70);
	//list.push_front(80);

	//std::list<int>::iterator iter;

	//iter = list.begin();

	//list.insert(iter++, 100);
	//list.erase(list.begin()); // 앞에 있는 수를 지움.

	//for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
	//{
	//	cout << "List의 값 : " << *iter << endl;
	//}





#pragma endregion


#pragma region String

	/*
	std::string content;

	content = "Hello World~";

	cout << content << endl;

	content.append("Continue");

	cout << content << endl;
	*/


#pragma endregion

#pragma region 최대 공약수 

	int firstvalue, secondvalue;
	cout << "두 수를 입력하시오 : ";

	cin >> firstvalue >> secondvalue;

	int gcd = 0;

	for (int i = 2; i < firstvalue || i < secondvalue; i++)
	{
		if (firstvalue % i == 0 && secondvalue % i == 0)
		{

			gcd = i;

		}

	}
	if (gcd == 0)
	{
		cout << "두 수의 약수가 존재하지않음";
	}
	else
	{
		cout << "두 수의 최대 공약수 : " << gcd;
	}
#pragma endregion






	return 0;
}















