#pragma once
#include "Gun.h"

class AR : public Gun
{
public:
	AR(string inputgunName, string inputbulletType);
	//자식에 virtual 써주는 이유 
	//-> 미래의 재정의 함수(AR의 하위클래스)를 위해
	virtual void GunType();
	virtual void UseBulletType();
}; 