#include "Gun.h"

Gun::Gun(string inputgunName, string inputbulletType)
{
	gunName = inputgunName;
	bulletType = inputbulletType;
}

void Gun::Shot()
{
	cout << gunName << " ������ ����!" << endl;
}

void Gun::GunType()
{
	cout << "�� ������� virtual ����Ѵ�" << endl;
}
