#include <iostream>
#include "Knight.h"
#include "Sword.h"

using namespace std;

void PrintMenu()
{
	// Menu Options
	cout << "What would you like to do?" << endl;
	cout << "1. Rename Knight" << endl;
	cout << "2. Change Knight's Level" << endl;
	cout << "3. Damage Knight" << endl;
	cout << "4. Change Knight's Position" << endl;
	cout << "5. Change Sword's Name" << endl;
	cout << "6. Change Sword's Damage" << endl;
}

void main()
{
	Knight hero;
	hero.CreateKnight();

	// Game loop
	bool GameRunning = true;
	while (GameRunning)
	{
		system("cls");

		// Welcome
		hero.PrintKnight();

		// Menu Options
		PrintMenu();

		int input;
		cin >> input;
		cin.clear();
		cin.ignore(9999999, '\n');

		// Actions
		switch (input)
		{
		case 1:
			cout << "Enter a new name for the knight" << endl;
			char name[32];
			cin >> name;
			hero.SetName(name);
			break;
		case 2:
			cout << "Enter level" << endl;
			int level;
			cin >> level;
			hero.SetLevel(level);
			break;
		case 3:
			cout << "How much damage?" << endl;
			int damage;
			cin >> damage;
			hero.DoDamage(damage);
			break;
		case 4:
			float x;
			float y;
			cout << "Enter X position";
			cin >> x;
			cout << "Enter Y position";
			cin >> y;
			hero.SetPosition(x, y);
			break;
		case 5:
			cout << "Enter the sword's name";
			char swordName[32];
			cin >> swordName;
			hero.SetSwordName(swordName);
			break;
		case 6:
			cout << "Enter sword's damage";
			int swordDamage;
			cin >> swordDamage;
			hero.SetSwordDamge(swordDamage);
			break;
		default:
			cout << "Error: not a valid option, please try again.";
			system("pause");
			break;
		}
	}

	system("pause");
}