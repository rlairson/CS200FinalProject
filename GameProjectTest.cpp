#include <iostream>
#include"player.h"

int menu() {
	int choice;
	system("cls");
	cout << "\t\tDnD Character Creator v1.0"
		<< "\n1. Select Race"
		<< "\n2. Select Class"
		<< "\n3. Roll Ability Scores"
		<< "\n4. View Character"
		<< "\n5. Swap Ability Scores"
		<< "\n6. Exit"
		<< "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

void selectRace(Player* p1) {
	int choice;
	system("cls");
	cout << "\t\tSelect Race"
		<< "\n1. Dwarf"
		<< "\n2. Elf"
		<< "\n3. Halfling"
		<< "\n4. Human"
		<< "\n5. Dragonborn"
		<< "\n6. Gnome"
		<< "\n7. Half-Elf"
		<< "\n8. Half - Orc"
		<< "\n9. Tiefling"
		<< "\nEnter your choice: ";
	cin >> choice;
	p1->setRace(choice);
}

void selectClass(Player* p1) {
	int choice;
	system("cls");
	cout << "\t\tSelect Class"
		<< "\n1. Barbarian"
		<< "\n2. Bard"
		<< "\n3. Cleric"
		<< "\nEnter your choice: ";
	cin >> choice;
	p1->setClass(choice);
}

void rollScores(Player* p1) {
	//Will require a pointer to the Player object
	system("cls");
	cout << "\t\tRoll Ability Scores" << endl;
	p1->setPlayerStats();
	p1->printPlayerStats();
}

void viewCharacter(Player* p1) {
	//Will require a pointer to the Player object
	system("cls");
	cout << "\t\tPlayer Character\n"
		<< p1->getCharacter()
		<< "\nAbility Scores: ";
	p1->printPlayerStats();
}

void swapScores(Player* p1) {
	//input integers corresponding to ability scores and swap, then refresh screen
	int first, second;
	system("cls");
	cout << "\t\tSwap Scores\n";
	p1->printPlayerStats();
	cout << "Enter the number of the first score you want to swap(1-6): ";
	cin >> first;
	cout << "Enter the number of the second score you want to swap(1-6): ";
	cin >> second;
	p1->swapStat(first, second);
	system("cls");
	cout << "\t\tSwap Scores\n";
	p1->printPlayerStats();
}

int main()
{
	int choice = 0;
	Player p1;

	while (choice != 6) {
		choice = menu();
		switch (choice) {
			case 1: //Select Race
				if (p1.getIsRaceSet() == false) {
					selectRace(&p1);
					system("pause");
				}
				else {
					cout << "\n\nRace has already been set." << endl;
					system("pause");
				}
				break;
			case 2: //Select Class
				if (p1.getIsClassSet() == false) {
					selectClass(&p1);
					system("pause");
				}
				else {
					cout << "\n\nClass has already been set." << endl;
					system("pause");
				}
				break;
			case 3: //Roll Ability Scores
				rollScores(&p1);
				system("pause");
				break;
			case 4: //View Character
				viewCharacter(&p1);
				system("pause");
				break;
			case 5: //Swap Scores
				swapScores(&p1);
				system("pause");
				break;
			case 6: //Exit
				break;
			default:
				break;
		}
	}
	return 0;
}