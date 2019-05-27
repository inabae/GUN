#pragma once
#include "Gun.h"

class SMG : public Gun
{
public:
	SMG(string inputgunName, string inputbulletType);
	virtual void GunType();
	virtual void UseBulletType();
};