#include "Knuckles.h"

Knuckles::Knuckles()
{
	attack = 8;
	intersection = 0;
}

void Knuckles::Attack()
{
	cout << "Knuckles Attack" << endl;
	cout << "너클 공격력 : " << sizeof(attack) << endl;
	cout << "너클 사거리 : " << sizeof(intersection) << endl;
}
