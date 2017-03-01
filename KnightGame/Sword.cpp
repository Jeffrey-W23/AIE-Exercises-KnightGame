#include <iostream>
#include "Sword.h"
using namespace std;

void Sword::CreateSword()
{
	strcpy_s(name, 32, "iPhone");
	damage = 10;
}

void Sword::SetName(char newName[32])
{
	strcpy_s(name, 32, newName);
}

void Sword::SetDamage(int newDamage)
{
	damage = newDamage;
}

void Sword::PrintSword()
{
	cout << "He wields " << name << " Which deals " << damage << " damage." << endl;
}
