#pragma once
#include "Gun.h"

class AR : public Gun
{
public:
	AR(string inputgunName, string inputbulletType);
	//�ڽĿ� virtual ���ִ� ���� 
	//-> �̷��� ������ �Լ�(AR�� ����Ŭ����)�� ����
	virtual void GunType();
	virtual void UseBulletType();
}; 