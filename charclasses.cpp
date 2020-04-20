#ifndef CHARCLASSES_H
#define CHARCLASSES_H

#include "charclasses.h"

#endif

/*
===================
CharClass functions
===================
*/

void CharClass::setHP(const int constitutionScore)
{
	int modifier = (constitutionScore - 10) / 2;

	startingHP = hitDie + modifier;
}

int CharClass::getHitDie()
{
	return hitDie;
}

int CharClass::getHP()
{
	return startingHP;
}

string CharClass::getClassName()
{
	return className;
}

string CharClass::getArmorProfs()
{
	return armorProfs;
}

string CharClass::getWeaponProfs()
{
	return weaponProfs;
}

string CharClass::getToolProfs()
{
	return toolProfs;
}

string CharClass::getSkillProfs()
{
	return skillProfs;
}

string CharClass::getSavingThrows()
{
	return savingThrows;
}

void CharClass::printList(const char *list[], int n)
{
	/* Cycle through the list, printing each entry */
	for (int i = 0; i < n; i++)
		printf("\t%2d. %s\n", i+1, list[i]);
}


/*
=======================
Warlock class functions
=======================
*/

Warlock::Warlock()
{
	hitDie       = 8;
	className    = "Warlock";
	armorProfs   = "Light armor";
	weaponProfs  = "Simple weapons";
	savingThrows = "Wisdom, Charisma";
	setToolProfs();
}

void Warlock::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 7;
	const char *skills[] = {
		"Arcana",
		"Deception",
		"History",
		"Intimidation",
		"Investigation",
		"Nature",
		"Religion"
	};

	cout << "Choose two of the following skills proficiencies:\n";
	printList(skills, amt_of_skills);

	for (;;) {
		cout << "First skill: ";
		cin  >> cmd1;

		if (cmd1 < 1 || cmd1 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Second skill: ";
		cin  >> cmd2;

		if (cmd2 < 1 || cmd2 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else if (cmd1 == cmd2)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Warlock::setToolProfs()
{
	toolProfs = "None";
}
