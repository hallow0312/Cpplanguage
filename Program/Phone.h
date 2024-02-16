#pragma once

class Phone
{
private:
	int volume; //private 로 숨김 
public: //public으로 는 private 멤버변수를 초기화 불가 
	
	int GetVolume(); // volume 값 출력 

	
	void SetVolume(int volume); //Setvolume 안에 this 를 활용하여 volume 값 초기화 

	
};

