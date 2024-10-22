#include "Knife.h"

Knife::Knife()
{
	attack = 10;
	intersection = 1;
}

void Knife::Attack()
{
	cout << "Knife Attack" << endl;
	cout << "나이프 공격력 : " << sizeof(attack) << endl;
	cout << "나이프 사거리 : " << sizeof(intersection) << endl;
}
