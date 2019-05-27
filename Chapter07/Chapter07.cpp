#include "Kar98.h"
#include "M416.h"
#include "Vector.h"

void PrintShot(Gun& inputGun)
{
	inputGun.Shot(); //�⺻��� ���

	inputGun.GunType(); //�����Լ� ���

	inputGun.UseBulletType(); //�߻�޼��� ���

	cout << endl;
}

int main()
{
	M416 m416("M416", "5.56");
	PrintShot(m416);
	 
	Kar98 kar98("Kar98", "7.62");
	PrintShot(kar98);

	Vector vector("Vector", ".45");
	PrintShot(vector);
}