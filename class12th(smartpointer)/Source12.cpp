#include <iostream>
#include <memory>
using namespace std;


#pragma region RAII패턴

// 자원의 안전한 사용을 위해 객체가 
// 쓰이는 범위를 벗어나게 되면 자원을 해제해주는 기법.
class File
{
public:
	File()
	{
		cout << "Create File" << endl;
	}
	~File()
	{
		cout << "Release File" << endl;
	}

};

class Player
{

#pragma region weak 포인터
	// 자신이 참조하고 있는 원시 포인터의 강한 참조 카운트가 0이 되면
	// expired 라는 상태가 되는데 , 이는 원시 포인터 의 참조 카운트가 0이 
	// 되어 메모리가 해제되었으므로 , 이 원시 포인터를 소유한 weak 포인터를 
	// 유효하지 않다고 판단하여 해제하는 포인터임.

#pragma endregion

private:
	weak_ptr<Player> partner;
public:
	Player()
	{
		cout << "Create Player" << endl;
	}

	~Player()
	{
		cout << "Release Player" << endl;
	}
	void SetPartner(weak_ptr<Player> partner)
	{
		this->partner = partner;
	}
};

#pragma endregion


int main()
{
#pragma region unique 포인터

	// 단, 하나의 객체만 가리킬 수 있는 스마트 포인터.

	//unique_ptr<File> uniquePtr1(new File());
	//cout << "uniquePtr1 의 값 : " << uniquePtr1 << endl; 

	//unique_ptr<File> uniquePtr2 = make_unique<File>();
	//cout << "uniquePtr2 의 값 : " << uniquePtr2 << endl; 

	////하나의 unique 포인터는 하나의 객체만 가질 수 있다 .
	////하지만 , 객체에 대한 소유권을 이전하는것은 가능함 .

	//unique_ptr<File> uniquePtr3= move(uniquePtr2);  

	//// uniquePtr2는 소유권을 이전했기에 NULL 이라는 값을 가리키게됌 
	//cout << "uniquePtr2 의 값 : " << uniquePtr2 << endl;   //(uniquePtr2를 출력시 0000000000000000으로 나옴) 

	//cout << "uniquePtr3 의 값 : " << uniquePtr3 << endl; 







#pragma endregion

#pragma region shared 포인터
	// 하나의 객체에 여러개의 포인터가 공유할 수 있으며 ,
	// 공유 할 때마다 참조 카운트를 이용해서 메모리를 관리하는 스마트 포인터.

	/*shared_ptr<Player> player1 = make_shared<Player>();


	shared_ptr<Player> player2 = make_shared<Player>();

	cout << "Player 1의 참조 횟수 : " << player1.use_count() << endl;
	cout << "Player 2의 참조 횟수 : " << player2.use_count() << endl;

	player1->SetPartner(player2);
	player2->SetPartner(player1);
	*/





#pragma endregion









	return 0;
}


































