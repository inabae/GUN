#pragma once
#include <iostream>
#include <string>
using namespace std;

class Gun
{
public:
	Gun(string inputgunName, string inputbulletType);
	void Shot();
	virtual void GunType();
	virtual void UseBulletType() = 0;
protected:
	string gunName;
	string bulletType; // ��ź ����(7.62, 9, .45, 5.56...)
};