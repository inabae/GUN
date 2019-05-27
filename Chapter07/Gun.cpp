#include "Gun.h"

Gun::Gun(string inputgunName, string inputbulletType)
{
	gunName = inputgunName;
	bulletType = inputbulletType;
}

void Gun::Shot()
{
	cout << gunName << " ÃÑÀ¸·Î ½ú´Ù!" << endl;
}

void Gun::GunType()
{
	cout << "³ª º¸±â½ÈÀ½ virtual ½á¾ßÇÑ´Ù" << endl;
}
