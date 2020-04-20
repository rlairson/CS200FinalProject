#include <iostream>
#include"player.h"

int menu() {
	int choice;
	system("cls");
	cout << "\t\tDnD Character Creator v1.0"
		<< "\n1. Roll Ability Scores"
		<< "\n2. Select Race"
		<< "\n3. Select Class"
		<< "\n4. Swap Ability Scores"
		<< "\n5. Set Level"
		<< "\n6. Roll Hitpoints"
		<< "\n7. View Character"
		<< "\n8. Exit"
		<< "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

void selectRace(Player* p1) {
	int race;
	int subRace = 0;
	system("cls");
	cout << "\t\tSelect Race"
		<< "\n1. Dwarf"
		<< "\n2. Elf"
		<< "\n3. Halfling"
		<< "\n4. Human"
		<< "\n5. Dragonborn"
		<< "\n6. Gnome"
		<< "\n7. Half-Elf"
		<< "\n8. Half-Orc"
		<< "\n9. Tiefling"
		<< "\nEnter your choice: ";
	cin >> race;
	switch (race) {
		case 1: //Dwarf
			system("cls");
			cout << "Select Race: "
				<< "\n1. Hill Dwarf"
				<< "\n2. Mountain Dwarf"
				<< "\nEnter your choice: ";
			cin >> subRace;
			break;
		case 2: //Elf
			system("cls");
			cout << "Select Race: "
				<< "\n1. High Elf"
				<< "\n2. Wood Elf"
				<< "\n3. Dark Elf"
				<< "\nEnter your choice: ";
			cin >> subRace;
			break;
		case 3: //Halfing
			system("cls");
			cout << "Select Race: "
				<< "\n1. Lightfoot"
				<< "\n2. Stout"
				<< "\nEnter your choice: ";
			cin >> subRace;
			break;
		case 6: //Gnome
			system("cls");
			cout << "Select Race: "
				<< "\n1. Forest Gnome"
				<< "\n2. Rock Gnome"
				<< "\nEnter your choice: ";
			cin >> subRace;
			break;
		default:
			break;
	}
	p1->setRace(race, subRace);
}

void selectClass(Player* p1) {
	int choice;
	system("cls");
	cout << "\t\tSelect Class"
		<< "\n1. Barbarian"
		<< "\n2. Bard"
		<< "\n3. Cleric"
		<< "\n4. Druid"
		<< "\n5. Fighter"
		<< "\n6. Monk"
		<< "\n7. Paladin"
		<< "\n8. Ranger"
		<< "\n9. Rogue"
		<< "\n10. Sorcerer"
		<< "\n11. Warlock"
		<< "\n12. Wizard"
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
	p1->setAreScoresRolled(true);
}

void viewCharacter(Player* p1) {
	//Will require a pointer to the Player object
	system("cls");
	cout << "\t\tPlayer Character\n"
		<< p1->getCharacter()
		<< "\nLevel: " << p1->getPlayerLevel()
		<< "\nAbility Scores: ";
	p1->printPlayerStats();
	p1->printHitpoints();
	cout << "Hit Dice: 1d" << p1->getHitDice()
		<< "\nProficiency Bonus: (+" << p1->getProficiencyBonus()<<")"<< endl;
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

void rollHitpoints(Player* p1) {	//Only allow this once
	int result = 0;

	for (int i = 1; i <= p1->getPlayerLevel(); i++) {
		system("cls");
		cout << "Set Hitpoints"
			<< "\nRoll for Level: " << i
			<< "\nHit Dice: 1d" << p1->getHitDice() << endl;
		if (i == 1) {
			p1->setHitpoints(p1->getHitDice() + (p1->getCon()-10)/2);
			p1->printHitpoints();
			system("pause");
		}
		else {
			cout << "\n1. Average Roll"
				<< "\n2. Random Roll"
				<< "\n\nEnter your choice: ";
			cin >> result;
			switch (result) {
			case 1: //Average Roll
				p1->setHitpoints((p1->getHitDice() / 2 + 1) + (p1->getCon()-10)/2);
				break;
			case 2: //Random Roll
				p1->setHitpoints(p1->rollDice(1, p1->getHitDice()) + (p1->getCon() - 10) / 2);
				break;
			default:
				break;
			}
		}
	}
	p1->printHitpoints();
	p1->setIsHPSet(true);
}

void setLevel(Player* p1) {
	int level = 1;
	system("cls");
	cout << "\t\tSet Level"
		<< "\nEnter your level (1-20): ";
	cin >> level;
	if (!(level >= 1 || level <= 20)) {
		level = 1;
	}
	p1->setPlayerLevel(level);
	cout << "\nLevel: " << p1->getPlayerLevel() << endl;
}

int main()
{
	int choice = 0;
	Player p1;

	while (choice != 8) {
		choice = menu();
		switch (choice) {
			case 1: //Roll Ability Scores
				if (p1.getAreScoresRolled() == false) {
					rollScores(&p1);
				}
				else {
					cout << "\n\nAbility Scores have already been rolled." << endl;
				}
				system("pause");
				break;
			case 2:	//Select Race
				if (p1.getIsRaceSet() == false) {
					selectRace(&p1);
				}
				else {
					cout << "\n\nRace has already been set." << endl;
				}
				system("pause");
				break;
			case 3: //Select Class
				if (p1.getIsClassSet() == false) {
					selectClass(&p1);
				}
				else {
					cout << "\n\nClass has already been set." << endl;
				}
				system("pause");
				break;
			case 4: //Swap Scores
				swapScores(&p1);
				system("pause");
				break;
			case 5: //Set Level
				setLevel(&p1);
				system("pause");
				break;
			case 6: //Roll Hitpoints
				if (p1.getIsHPSet() == false) {
					rollHitpoints(&p1);
				}
				else {
					cout << "\n\nHP has already been set." << endl;
				}
				system("pause");
				break;
			case 7:	//View Character
				viewCharacter(&p1);
				system("pause");
				break;
			case 8:	//Exit
				break;
			default:
				break;
		}
	}
	return 0;
}