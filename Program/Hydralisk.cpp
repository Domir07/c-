#include "Hydralisk.h"

Hydralisk::Hydralisk()
{
	health = 80;
	initializeHeath = health;
}

void Hydralisk::Recovery()
{
	health = initializeHeath;
}
