#include "Knuckles.h"

Knuckles::Knuckles()
{
	attack = 8;
	intersection = 0;
}

void Knuckles::Attack()
{
	cout << "Knuckles Attack" << endl;
	cout << "��Ŭ ���ݷ� : " << sizeof(attack) << endl;
	cout << "��Ŭ ��Ÿ� : " << sizeof(intersection) << endl;
}
