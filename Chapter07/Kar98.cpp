#include "Kar98.h"

Kar98::Kar98(string inputName, string inputbulletType) : SR(inputName, inputbulletType)
{

}

void Kar98::UseBulletType()
{
	cout << bulletType << "�� ����Ѵ�." << endl;
} 