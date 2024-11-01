#pragma once

#include<iostream>

using namespace std;

class Zerg
{
protected:
	int health;
	int initializeHeath;

public:
	virtual void Recovery();

	virtual void OnDamage(int damage);

	int Health();

};

