#include "Vector.h"

Vector::Vector(string inputName, string inputbulletType) : SMG(inputName, inputbulletType)
{

}

void Vector::UseBulletType()
{
	cout << bulletType << "을 사용한다." << endl;
}