#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

char character = 'A';

using namespace std;



namespace EnemySkill
{
	void Skill()
	{
		cout << "Enemy Skill" << endl;
	}
}

namespace PlayerSkill
{
	void Skill()
	{
		cout << "Player Skill" << endl;
	}
}

int main()
{
#pragma region 범위 지정 연산자 
	// 여러 범위에서 사용되는 식별자를 구분하는데 
	// 사용하는 연산자.

	//char character = 'W';

	//std::cout << "character의 값 : " << character << std::endl;

	//// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때 
	//// 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 
	//// 때문에 전역변수가 호출이 되지 않는다 .

	//std::cout << "전역 변수 character 의 값 : " << ::character << std::endl; 

	//범위 지정 연산자를 사용하여 전역변수의 범위를 지정해주면 
	//전역 범위에 접근 할 수 있다.




#pragma endregion

#pragma region 이름 공간 

	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역.

	/*
	EnemySkill::Skill();
	PlayerSkill::Skill();
	*/

	//이름 공간은 같은 이름의 함수나 변수를 또 다른 공간에 
	// 선언하여 중복되지 않도록 선언할 수 있다 .



#pragma endregion

#pragma region 회문 판별 

	/*bool flag = true;
	const char* content = "level";
	int length = 0;
	length = strlen(content);


	for (int i = 0; i < length / 2; i++)
	{
		if (content[i] != content[length -1- i])
		{
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << "회문입니다." << endl;
	}
	else if (flag == false)
	{

		cout << "회문이 아닙니다." << endl;
	}
	*/


#pragma endregion

#pragma region 소문자를 대문자로 변화하는 알고리즘

	char nickname[] = "bard";

	for (int i = 0; i < strlen(nickname); i++)
	{
		if (nickname[i] >= 'a' && nickname[i] <= 'z')
		{
			nickname[i] = nickname[i] - 32;
		}
	}

	cout << nickname << endl;

#pragma endregion




	return 0;

}











