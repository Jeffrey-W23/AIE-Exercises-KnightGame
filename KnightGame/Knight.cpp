#include <iostream>
#include "Knight.h"
using namespace std;

void Knight::CreateKnight()
{
	strcpy_s(name, 32, "Jeff");
	health = 100;
	level = 90;
	position = { 5.0f, 3.0f };
	sword.CreateSword();
}

void Knight::PrintKnight()
{
	cout << "Brave " << name << " stands before you!" << endl;
	cout << "He has " << health << " health. He is level " << level << endl;
	cout << "His position is " << position.x << ", " << position.y << endl;
	sword.PrintSword();
	cout << endl;
}

void Knight::SetName(char newName[32])
{
	strcpy_s(name, 32, newName);
}

void Knight::DoDamage(int damage)
{
	if (damage > 0)
		health -= damage;
}

void Knight::SetLevel(int newLevel)
{
	level = newLevel;
}

void Knight::SetPosition(float x, float y)
{
	position.x = x;
	position.y = y;
}

void Knight::SetSwordName(char swordName[32])
{
	sword.SetName(swordName);
}

void Knight::SetSwordDamge(int swordDamage)
{
	sword.SetDamage(swordDamage);
}