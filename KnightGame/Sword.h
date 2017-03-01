#pragma once

class Sword
{
	// Create struct
private:
	char name[32];
	int damage;

	// Initialise the Knight's sword
public:
	void CreateSword();

	void SetName(char newName[32]);

	void SetDamage(int newDamage);

	void PrintSword();
};

