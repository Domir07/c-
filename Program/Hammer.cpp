#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer Attack" << endl;
	cout << "��ġ ���ݷ� : " << sizeof(attack) << endl;
	cout << "��ġ ��Ÿ� : " << sizeof(intersection) << endl;
}
