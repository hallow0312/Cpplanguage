#include <iostream>
using namespace std;

#pragma region 클래스
// 사용자 정의 데이터 유형으로 속성과 함수가 포함
// 되어있으며, 클래스를 통해 객체를 생성하여 접근
// 하여 사용할 수 있는 집합체 .
class GameObject
{
#pragma region 접근지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를 
	// 제한하는 지정자 .

	// public :	   클래스 내부에 있는 데이터를 클래스 외부와 자기가 
	//			   상속하고 있는 클래스에서도 접근을 허용하는 지정자 . 

	// protected : 클래스 내부에 있는 데이터를 클래스 내부와 자기가 상속하고 
	//			   있는 클래스에서만 접근을 허용하는 지정자 .

	// private :   클래스 내부에 있는 데이터를 클래스 내부에서만 접근을 
	//			   허용하는 지정자 .		

#pragma endregion
	// 접근 지정자를 정하지않으면 기본으로 private 지정자로 선택이 됌. 
	int x = 5;

private:

	int y = 10;


protected:

	int z = 15;

public:
	void Information()
	{
		cout << "x의 값 : " << x << endl;
		cout << "y의 값 : " << y << endl;
		cout << "z의 값 : " << z << endl;
	}
};




#pragma endregion

class Item
{
public:
	// 생성자의 경우 객체가 생성이 될 떄 단 한 번만 호출되며,
	// 생성자는 void 라는 반환형이 존재하지 않기 떄문에 생성자가 호출 되기 
	// 전에는 객체에 대한 메모리는 할당하지 않음 .
	Item()
	{
		cout << "Create Item" << endl;
	}
#pragma region 소멸자
	// 객체가 소멸 될 떄 자동으로 실행되는 클래스의 멤버함수 .

	~Item()
	{
		cout << "Release Item" << endl;
	}

	// 소멸자는 객체가 메모리에서 해제가 될 때 단 한 번만 호출이 되며,
	// 소멸자에는 매개 변수를 생성하여 사용할 수 없음.
#pragma endregion


};


int main()
{
#pragma region 클래스



	/*GameObject gameObject;

	cout << "GameObject 의 크기 : " << sizeof(gameObject) << endl;

	gameObject.Information();

	GameObject* pointer = new GameObject;

	pointer->Information();
*/
#pragma endregion

#pragma region 생성자
// 클래스의 인스턴스가 생성되는 시점에서 자동으로 
// 호출되는 특수한 멤버 함수 .

	Item item; //1. stack item 생성  

	Item* itemptr = new Item; //2. heap Item 생성

	delete itemptr; // 1. heap Item 소멸  


#pragma endregion





	return 0; // 2. stack Item 소멸 
}