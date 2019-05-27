#pragma once
#include "SR.h"

class Kar98 : public SR
{
public:
	Kar98(string inputName, string inputbulletType);
	virtual void UseBulletType();
}; 