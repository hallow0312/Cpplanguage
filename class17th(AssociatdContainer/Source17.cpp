﻿#include <iostream>
#include <list>
#include<map>
#include<set>

using namespace std;




int main()
{
#pragma region 연관 컨테이너

#pragma region List
	//std::list<int> list;
	//list.push_front(10);
	//list.push_back(5); 
	//list.push_back(11);
	//																															
	//// list.begin()
	//// list의 첫번쨰 주소를 반환 하는 함수 

	// list.begin(); 

	// //list.end() 
	// // list의 마지막 그 다음에 있는 주소를 반환 

	// list.end();

	// //list.sort()
	// //list의 모든 원소를 오름차순으로 정렬하는 함수
	// list.sort();

	// //list.popback()
	// // list에 가장 마지막 원소를 삭제.
	// list.pop_back();
#pragma endregion

#pragma region Map
	//std::map <const char*, int> map;
	//map.insert(std::make_pair("Sword",10000));
	//map.insert(std::make_pair("Guard", 8500));
	//map.insert(std::make_pair("Gloves", 7500));
	//
	//cout << map["Sword"]<<endl;

	////map.find();
	////map 에서 해당하는 key를 가지는 원소를 탐색하는 함수
	//// 해당하는 key가 없을 경우 end()를 반환함.
	//map.find("Sword");
	//
	////map.count();
	//// map에서 해당 key를 가지는 원소의 개수를 반환하는 함수 .
	//// map에서는 중복된 key를 가질 수 없으므로 , key가 존재하면 
	//// 1을 반환함. (key 가 존재하지않으면 0을 반환함.)

	//cout<<map.count("Sword")<<endl;
	//
	//map.insert(std::make_pair("Sword", 9000));
	//cout << map["Sword"] << endl;




#pragma endregion

#pragma region Set

	//std::set<int> set;

	//set.insert(10);
	//set.insert(20);
	//set.insert(30);
	//set.insert(40);
	//





#pragma endregion



#pragma endregion




	return 0;
}















