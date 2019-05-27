#pragma once
#include "SMG.h"

class Vector : public SMG
{
public:
	Vector(string inputName, string inputbulletType);
	virtual void UseBulletType();
};