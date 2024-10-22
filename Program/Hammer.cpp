#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer Attack" << endl;
	cout << "¸ÁÄ¡ °ø°Ý·Â : " << sizeof(attack) << endl;
	cout << "¸ÁÄ¡ »ç°Å¸® : " << sizeof(intersection) << endl;
}
