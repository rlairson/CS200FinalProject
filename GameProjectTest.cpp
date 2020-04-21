#include <iostream>
#include"player.h"

#ifndef CHARCLASSES_H
#define CHARCLASSES_H
#include "charclasses.h"
#endif

#ifndef RACESV2_H
#define RACESV2_H
#include "RacesV2.h"
#endif

int menu() {
	int choice;
	system("cls");
	cout << "\t\tDnD Character Creator v1.0"
		<< "\n1. Roll Ability Scores"
		<< "\n2. Select Race"
		<< "\n3. Select Class"
		<< "\n4. Swap Ability Scores"
		<< "\n5. Roll Hitpoints"
		<< "\n6. View Character"
		<< "\n7. Exit"
		<< "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

/*
void selectRace(Player* p1) {
	int race;
	int subRace = 0;
	system("cls");
	cout << "Select a race\n"
		<< "\t1. Dwarf\n"
		<< "\t2. Elf\n"
		<< "\t3. Halfling\n"
		<< "\t4. Human\n"
		<< "\t5. Dragonborn\n"
		<< "\t6. Gnome\n"
		<< "\t7. Half-Elf\n"
		<< "\t8. Half-Orc\n"
		<< "\t9. Tiefling\n"
		<< "\nEnter your choice: ";
	cin >> race;
	switch (race) {
		case 1: //Dwarf
			system("cls");
			cout << "Select a subrace: "
				<< "\t1. Hill Dwarf\n"
				<< "\t2. Mountain Dwarf\n"
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
	//p1->setRace(race, subRace);
	//Pass race and subrace to races.h
}
*/

int selectRace() {
	int choice;
	system("cls");
	cout << "\t\tSelect Class"
		<< "\n 1. Hill Dwarf"
		<< "\n 2. Mountain Dwarf"
		<< "\n 3. High Elf"
		<< "\n 4. Wood Elf"
		<< "\n 5. Dark Elf"
		<< "\n 6. Lightfoot (Halfling)"
		<< "\n 7. Stout Halfling)"
		<< "\n 8. Human"
		<< "\n 9. Dragonborn"
		<< "\n10. Forest Gnome"
		<< "\n11. Rock Gnome"
		<< "\n12. Half Elf"
		<< "\n13. Half Orc"
		<< "\n14. Tiefling"
		<< "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

void setRace(Race **p1Race) {
	int playerRace = selectRace();

	switch (playerRace) {
	case HILLDWARF:
		*p1Race = new HillDwarf();
		break;
	case MOUNTAINDWARF:
		*p1Race = new MountainDwarf();
		break;
	case HIGHELF:
		*p1Race = new HighElf();
		break;
	case WOODELF:
		*p1Race = new WoodElf();
		break;
	case DARKELF:
		*p1Race = new DarkElf();
		break;
	case LIGHTFOOT:
		*p1Race = new Lightfoot();
		break;
	case STOUT:
		*p1Race = new Stout();
		break;
	case HUMAN:
		*p1Race = new Human();
		break;
	case DRAGONBORN:
		*p1Race = new DragonBorn();
		break;
	case FORESTGNOME:
		*p1Race = new ForestGnome();
		break;
	case ROCKGNOME:
		*p1Race = new RockGnome();
		break;
	case HALFELF:
		*p1Race = new HalfElf();
		break;
	case HALFORC:
		*p1Race = new HalfOrc();
		break;
	case TIEFLING:
		*p1Race = new Tiefling();
		break;
	default:
		cout << "Error in setRace()" << endl;
	}

	(*p1Race)->setName();
	(*p1Race)->setAge();
	(*p1Race)->setAlignment();
}

int selectClass() {
	int choice;
	system("cls");
	cout << "\t\tSelect Class"
		<< "\n 1. Barbarian"
		<< "\n 2. Bard"
		<< "\n 3. Cleric"
		<< "\n 4. Druid"
		<< "\n 5. Fighter"
		<< "\n 6. Monk"
		<< "\n 7. Paladin"
		<< "\n 8. Ranger"
		<< "\n 9. Rogue"
		<< "\n10. Sorcerer"
		<< "\n11. Warlock"
		<< "\n12. Wizard"
		<< "\nEnter your choice: ";
	cin >> choice;
	return choice;
}

void setClass(CharClass **p1Class) {
	int playerClass = selectClass();

	switch (playerClass) {
	case BARBARIAN:
		*p1Class = new Barbarian();
		break;
	case BARD:
		*p1Class = new Bard();
		(*p1Class)->setToolProfs(); // Some classes let you set tool
		break;                      // proficiencies, some don't.
	case CLERIC:
		*p1Class = new Cleric();
		break;
	case DRUID:
		*p1Class = new Druid();
		break;
	case FIGHTER:
		*p1Class = new Fighter();
		break;
	case MONK:
		*p1Class = new Monk();
		(*p1Class)->setToolProfs();
		break;
	case PALADIN:
		*p1Class = new Paladin();
		break;
	case RANGER:
		*p1Class = new Ranger();
		break;
	case ROGUE:
		*p1Class = new Rogue();
		break;
	case SORCERER:
		*p1Class = new Sorcerer();
		break;
	case WARLOCK:
		*p1Class = new Warlock();
		break;
	case WIZARD:
		*p1Class = new Wizard();
		break;
	default:
		cout << "Error occured in setClass()" << endl;
	}

	(*p1Class)->setSkillProfs();
}

		

void rollScores(Player* p1) {
	//Will require a pointer to the Player object
	system("cls");
	cout << "\t\tRoll Ability Scores" << endl;
	p1->setPlayerStats();
	p1->printPlayerStats();
	p1->setAreScoresRolled(true);
}

/*
void viewCharacter(Player* p1) {
	//Will require a pointer to the Player object
	system("cls");
	cout << "\t\tPlayer Character\n"
		//<< p1->getCharacter()
		<< "\nLevel: " << p1->getPlayerLevel()
		<< "\nAbility Scores: ";
	p1->printPlayerStats();
	//p1->printHitpoints();
	cout //<< "Hit Dice: 1d" << p1->getHitDice()
		<< "\nProficiency Bonus: (+" << p1->getProficiencyBonus()<<")"<< endl;
}
*/

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
	/*
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
	*/

	//Pass p1 constitution score to charclasses.h
}

/*
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
*/

int main()
{
	int choice = 0;
	Player     p1;
	CharClass *p1Class;
	Race      *p1Race;

	while (choice != 7) {
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
				setRace(&p1Race);

				cout << p1Race->getPlayerName() << endl;
				cout << p1Race->getRaceName()   << endl;
				cout << p1Race->getAlignment()  << endl;

				break;
			case 3: //Select Class
				setClass(&p1Class);

				/* Testing to make sure the function works
				cout << p1Class->getClassName()  << endl;
				cout << p1Class->getSkillProfs() << endl;
				cout << p1Class->getArmorProfs() << endl;
				cout << p1Class->getToolProfs()  << endl;
				*/

				system("pause");
				break;
			case 4: //Swap Scores
				swapScores(&p1);
				system("pause");
				break;
			case 5: //Roll Hitpoints
				/*
				if (p1.getIsHPSet() == false) {
					rollHitpoints(&p1);
				}
				else {
					cout << "\n\nHP has already been set." << endl;
				}
				*/
				system("pause");
				break;
			case 6:	//View Character
				viewCharacter(&p1);
				system("pause");
				break;
			case 7:	//Exit
				break;
			default:
				break;
		}
	}
	return 0;
}
