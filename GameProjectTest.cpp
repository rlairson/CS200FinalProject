#include <iostream>
#include <fstream>
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
		<< "\n7. Save to File"
		<< "\n8. Exit"
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


void viewCharacter(Player* p1, CharClass** p1Class, Race** p1Race) {
	system("cls");
	cout << "\t\tPlayer Character" << "\n"
		<< "\nRace: " << (*p1Race)->getRaceName()
		<< "\nClass: " << (*p1Class)->getClassName()
		<< "\nCharacter Name: " << (*p1Race)->getPlayerName()
		<< "\nAbility Scores: "
		<< "\n\tStrength: " << p1->getStr() + (*p1Race)->getStrBonus()
		<< "\n\tDexterity: " << p1->getDex() + (*p1Race)->getDexBonus()
		<< "\n\tConstitution: " << p1->getCon() + (*p1Race)->getConBonus()
		<< "\n\tIntelligence: " << p1->getInt() + (*p1Race)->getIntBonus()
		<< "\n\tWisdom: " << p1->getWis() + (*p1Race)->getWisBonus()
		<< "\n\tCharisma: " << p1->getCha() + (*p1Race)->getChaBonus()
		<< "\nStarting HP: " << (*p1Class)->getHP()
		<< "\nArmor Proficiency: " << (*p1Class)->getArmorProfs()
		<< "\nWeapon Proficiency: " << (*p1Class)->getWeaponProfs()
		<< "\nTool Proficiency: " << (*p1Class)->getToolProfs()
		<< "\nSkill Proficiency: " << (*p1Class)->getSkillProfs()
		<< "\nSaving Throws: " << (*p1Class)->getSavingThrows()
		<< "\nAge: " << (*p1Race)->getAge()
		<< "\nAlignment: " << (*p1Race)->getAlignment()
		<< "\nSize: " << (*p1Race)->getSize()
		<< "\nSpeed: " << (*p1Race)->getSpeed()
		<< "\nRacial Skills: " << (*p1Race)->getRaceSkills()
		<< "\nRace Weapon Proficiency: " << (*p1Race)->getRaceWeaponProfs()
		<< "\nLanguages: " << (*p1Race)->getLanguages()
		<< endl;
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

void rollHitpoints(Player* p1, CharClass** p1Class, Race** p1Race) {	//Only allow this once

	(*p1Class)->setHP(p1->getCon() + (*p1Race)->getConBonus());
	cout << "\nStarting HP: " << (*p1Class)->getHP() << endl;

}

void saveToFile(Player* p1, CharClass** p1Class, Race** p1Race) {
	ofstream out;
	out.open("myCharacter.txt");
		out << "\t\tPlayer Character" << "\n";
	out << "\nRace: " << (*p1Race)->getRaceName();
	out << "\nClass: " << (*p1Class)->getClassName();
	out << "\nCharacter Name: " << (*p1Race)->getPlayerName();
	out << "\nAbility Scores: ";
	out << "\n\tStrength: " << p1->getStr() + (*p1Race)->getStrBonus();
	out << "\n\tDexterity: " << p1->getDex() + (*p1Race)->getDexBonus();
	out << "\n\tConstitution: " << p1->getCon() + (*p1Race)->getConBonus();
	out << "\n\tIntelligence: " << p1->getInt() + (*p1Race)->getIntBonus();
	out << "\n\tWisdom: " << p1->getWis() + (*p1Race)->getWisBonus();
	out << "\n\tCharisma: " << p1->getCha() + (*p1Race)->getChaBonus();
	out << "\nStarting HP: " << (*p1Class)->getHP();
	out << "\nArmor Proficiency: " << (*p1Class)->getArmorProfs();
	out << "\nWeapon Proficiency: " << (*p1Class)->getWeaponProfs();
	out << "\nTool Proficiency: " << (*p1Class)->getToolProfs();
	out << "\nSkill Proficiency: " << (*p1Class)->getSkillProfs();
	out << "\nSaving Throws: " << (*p1Class)->getSavingThrows();
	out << "\nAge: " << (*p1Race)->getAge();
	out << "\nAlignment: " << (*p1Race)->getAlignment();
	out << "\nSize: " << (*p1Race)->getSize();
	out << "\nSpeed: " << (*p1Race)->getSpeed();
	out << "\nRacial Skills: " << (*p1Race)->getRaceSkills();
	out << "\nRace Weapon Proficiency: " << (*p1Race)->getRaceWeaponProfs();
	out << "\nLanguages: " << (*p1Race)->getLanguages();
		out << endl;
	out.close();
}

int main()
{
	int choice = 0;
	Player     p1;
	CharClass *p1Class;
	Race      *p1Race;

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
				setRace(&p1Race);

				cout << p1Race->getPlayerName() << endl;
				cout << p1Race->getRaceName()   << endl;
				cout << p1Race->getAlignment()  << endl;

				system("pause");
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
			case 4: //Swap Scores		//Once HP has been rolled, disallow swapping scores
				swapScores(&p1);
				system("pause");
				break;
			case 5: //Roll Hitpoints
				rollHitpoints(&p1, &p1Class, &p1Race);
				system("pause");
				break;
			case 6:	//View Character
				viewCharacter(&p1, &p1Class, &p1Race);

				system("pause");
				break;

			case 7: //Save to File
				saveToFile(&p1, &p1Class, &p1Race);
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
