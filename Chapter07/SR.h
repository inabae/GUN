 #pragma once
#include "Gun.h"

class SR : public Gun
{
public:
	SR(string inputgunName, string inputbulletType);
	virtual void GunType();
	virtual void UseBulletType();
};