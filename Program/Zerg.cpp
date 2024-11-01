#include "Zerg.h"

void Zerg::Recovery()
{
	cout << "Zerg Recover" << endl;
}
 void Zerg::OnDamage(int damage)
{
	health -= damage;
}

int Zerg::Health()
{
	return health;
}
