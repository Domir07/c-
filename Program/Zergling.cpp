#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	initializeHeath = health;
}

void Zergling::Recovery()
{
	health = initializeHeath;
}
