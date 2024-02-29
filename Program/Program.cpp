#include <iostream>
#include <vector>
#include <conio.h>
#include<time.h>
#include<windows.h>
using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80


void Keyboard()
{
	char c;
	if (_kbhit())
	{
		c = _getch();
		if (c == -32) {
			c = _getch();
			switch (c) {
			case LEFT:
				cout << "←";

				break;
			case RIGHT:
				cout << "→";
				break;
			case UP:
				cout << "↑";
				break;
			case DOWN:
				cout << "↓";
				break;
			}
		}
	}
		
}


int main()
{
	

	
#pragma region 선형 컨테이너 

	// 데이터를 선형으로 저장하며 , 특별한 제약이나 규칙이 없는 
	// 일반적인 컨테이너 .
#pragma endregion

#pragma region Vector
	//std::vector<int> vector;
	//
	//vector.reserve(10); 
	//// push_back : Vector 컨테이너 뒤에 데이터 값을 넣어줌 .
	//// [10][20][30][40][50]
	//vector.push_back(10);
	//cout << "vector.capacity : " << vector.capacity() << endl;
	//vector.push_back(20);
	//
	//

	//vector.push_back(30);
	//


	//vector.push_back(40);
	//

	//vector.push_back(50);
	//cout << "vector.capacity : " << vector.capacity() << endl;
	//vector.pop_back();
	//vector.pop_back();
	//vector.pop_back(); 

	//

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << " ";
	//}


	//cout << endl<< "vector.size : " << vector.size() << endl;

	//cout << "vector.capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region Rythm Game
	srand((unsigned)time(NULL));
	int num;
	int count;
	std::vector<const char*> vector;
	
	while (1)
	{	num=rand() % 4;
		if (num == 0)
		{
			vector.push_back("↑");
			
		}
		else if (num == 1)
		{
			vector.push_back("←");

		}
		else if (num == 2)
		{
			vector.push_back("↓");

		}
		else if (num == 3)
		{
			vector.push_back("→");
		}
		

		Keyboard();


				
	
		


		

		







	}

	
	


#pragma endregion





	return 0;
}
