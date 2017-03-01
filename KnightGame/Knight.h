#pragma once

#include "Vector.h"
#include "Sword.h"

class Knight
{
private:
	// Create struct
	char name[32];
	int health;
	int level;

	Vector position;
	Sword sword;

	// Initialise the knigtht
public:
	void CreateKnight();

	void PrintKnight();

	void SetName(char newName[32]);

	void DoDamage(int damage);

	void SetLevel(int newLevel);

	void SetPosition(float x, float y);

	void SetSwordName(char swordName[32]);

	void SetSwordDamge(int swordDamage);
};