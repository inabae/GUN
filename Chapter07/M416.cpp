#include "M416.h"

M416::M416(string inputName, string inputbulletType) : AR(inputName, inputbulletType)
{

}

void M416::UseBulletType()
{
	cout << bulletType << "을 사용한다." << endl;
} 