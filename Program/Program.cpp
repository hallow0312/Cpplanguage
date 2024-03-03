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

void GotoXY(int x, int y)
{
	// x , y 좌표 설정
	COORD position = { x,y };

	// 커서 이동 함수 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}
void textcolor(int colorNum) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}


void SetQuestion(vector<int>& questionV)
{
	questionV.clear();
	for (int i = 0; i < 5; i++)
	{
		
		int num = rand() % 4;
		switch (num)
		{
		case 0:questionV.push_back(UP);
			
			break;

		case 1:questionV.push_back(LEFT);
		
			break;

		case 2:questionV.push_back(DOWN);
		

			break;
		case 3:questionV.push_back(RIGHT);
			

			break;

		}
	}
	
	
	for (int i = 0; i < questionV.size(); i++)
	{
		switch (questionV[i])
		{
		case UP: cout << "↑"<<" ";
			break;
		case DOWN: cout << "↓"<<" ";
			break;
		case LEFT: cout << "←"<<" ";
			break;
		case RIGHT: cout << "→"<<" ";
			break;
		}
	}
	
}
void MakeAnswer(vector <int> *QuestionV,vector <int> *AnswerV) 
{
	char key;
	AnswerV->clear();
	for (int i = 0; i < QuestionV->size(); i++)
	{
		key = _getch();
		if (_kbhit())
		{
			
			if (key == -32)
			{
				key = _getch();
				AnswerV->push_back(key);
				switch (key)
				{
				case LEFT:
					cout << "←" << " ";
					
					break;
				case RIGHT:
					cout << "→" << " ";
					
					break;
				case UP:
					cout << "↑" << " ";


					break;
				case DOWN:
					cout << "↓" << " ";
					

					break;
				}
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
	
	int Life;
	
	std::vector<int> questionV;
	std::vector<int> AnswerV;
	Life = 5;
	while (Life)
	{
		GotoXY(0, 0);
		textcolor(4);
		for (int i = 0; i < Life; i++)
		{
			cout << "♥"<<" ";
		}
		textcolor(15);

		GotoXY(0, 1); 
		int Answercount = 0;
		SetQuestion(questionV);
		cout << endl;
		
		MakeAnswer(&questionV, &AnswerV);

		for (int i = 0; i < questionV.size(); i++)
		{
			if (questionV[i] == AnswerV[i])
			{
				Answercount += 1;
			}
			
		}
		if (Answercount == questionV.size())
		{
			system("cls");
		}
		else if (Answercount != questionV.size())
		{
			system("cls");
			Life--;
		}


	}

	if (Life <= 0)
	{
		GotoXY(3, 3);
		cout << "YOU LOSE";
		cout << endl;
		cout << endl;
		cout << endl;
	}

				
	
		


	
		

		








	
	


#pragma endregion





	return 0;
}
