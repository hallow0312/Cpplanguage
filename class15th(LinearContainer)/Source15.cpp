#include <iostream>
#include <vector>
#include <conio.h>
#include<time.h>
#include<windows.h>
#include<deque>
using namespace std;



#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define MapWidth 25
#define MapHeight 10

void GotoXY(int x, int y)
{
	// x , y 좌표 설정
	COORD position = { x,y };

	// 커서 이동 함수 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}
void CreateMap() //맵 제작 함수 
{



	GotoXY(MapWidth, MapHeight);
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ";
	GotoXY(MapWidth, MapHeight + 8);
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ";

	for (int i = 0; i < 7; i++)
	{
		GotoXY(MapWidth - 1, MapHeight + 1 + i);

		cout << "ㅣ" << endl;

	}

	for (int i = 0; i < 7; i++)
	{
		GotoXY(MapWidth + 41, MapHeight + 1 + i);

		cout << "ㅣ" << endl;

	}
}
void textcolor(int colorNum) //색깔 변경 함수 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}
void SetQuestion(vector<int>& questionV) //문제 만드는 함수 
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
		case UP: cout << "↑" << " ";
			break;
		case DOWN: cout << "↓" << " ";
			break;
		case LEFT: cout << "←" << " ";
			break;
		case RIGHT: cout << "→" << " ";
			break;
		}
	}

}
void MakeAnswer(vector <int>* QuestionV, vector <int>* AnswerV)  //제출할 답을 만드는 함수
{
	GotoXY(MapWidth + 14, MapHeight + 6);

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
	/*
	srand((unsigned)time(NULL));

	int Life;
	int count=0;
	std::vector<int> questionV;
	std::vector<int> AnswerV;
	Life = 5;
	while (Life)
	{

		CreateMap();
		GotoXY(MapWidth + 39, MapHeight + 1);
		cout << count;


		GotoXY(MapWidth+14, MapHeight+2);
		textcolor(4);
		for (int i = 0; i < Life; i++)
		{
			cout << "♥"<<" ";
		}
		textcolor(15);
		GotoXY(MapWidth + 4,MapHeight+4);
		cout << "Question :";
		GotoXY(MapWidth + 4, MapHeight+6);
		cout << "  Answer : ";
		GotoXY(MapWidth + 14,MapHeight+4);

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
			count++;
		}
		else if (Answercount != questionV.size())
		{
			system("cls");
			Life--;
		}


	}

	if (Life <= 0)
	{
		CreateMap();

		GotoXY(MapWidth + 14, MapHeight+3);
		cout << "YOU LOSE";
		cout << endl;
		GotoXY(MapWidth + 14, MapHeight+5);

		cout << "맞춘 개수 : " << count << endl;
		cout << endl;
		cout << endl;
	}

				*/




















#pragma endregion

#pragma region Deque

	std::deque<int>deque;
	deque.push_front(10);
	deque.push_back(5);
	deque.push_back(1);
	deque.push_front(7);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << "deque의 [" << i << "] : " << deque[i] << endl;
	}
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	deque.pop_front();
	deque.pop_back();
	for (int i = 0; i < deque.size(); i++)
	{
		cout << "deque의 [" << i << "] : " << deque[i] << endl;
	}


#pragma endregion






	return 0;
}










