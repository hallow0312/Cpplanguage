#include <iostream>

using namespace std;

class Food
{
public:
	Food()
	{
		cout << "Create Food" << endl;
	}
	~Food()
	{
		cout << "Release Food" << endl;
	}
};
class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "Create Meat" << endl;
	}
	~Meat()
	{
		cout << "Release Meat" << endl;
	}

};
class Vegetable : public virtual Food
{
public:
	Vegetable()
	{
		cout << "Create Vegetable" << endl;
	}
	~Vegetable()
	{
		cout << "Release Vegetable" << endl;
	}

};

class Soup : public Meat, public Vegetable
{
public:
	Soup()
	{
		cout << "Create Soup" << endl;

	}
	~Soup()
	{
		cout << "Release Soup" << endl;
	}

};

int main()
{


#pragma region 가상 상속
	/*Soup soup;*/
#pragma endregion

#pragma region 등차수열 
	//int a, d, n; // 첫항 공차 횟수
	//cout << "첫 항 :";

	//cin >> a;

	//cout << endl << "공 차 :";

	//cin >> d;

	//cout << endl << "횟 수 : ";

	//cin >> n;
	//int i = 0;

	//for (i = 0; i < n; i++)
	//{
	//	cout << a << " ";
	//	a = a + d;
	//}




#pragma endregion







	return 0;
}
