#include "Mouse.h"
#include <iostream>

using namespace std;

Mouse::Mouse()
{
	cout << "Create Mouse" << endl;
}

void Mouse::OnEnter()
{
	cout << "Mouse Enter" << endl;
}

Mouse::~Mouse()
{
	cout << "Release Mouse" << endl;
}
