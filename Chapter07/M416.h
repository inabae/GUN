#pragma once
#include "AR.h"

class M416 : public AR
{
public:
	M416(string inputName, string inputbulletType);
	virtual void UseBulletType();
};