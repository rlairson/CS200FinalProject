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
=========================
Barbarian class functions
=========================
*/

Barbarian::Barbarian()
{
	hitDie       = 12;
	className    = "Barbarian";
	armorProfs   = "Light armor, medium armor, shields";
	weaponProfs  = "Simple weapons";
	savingThrows = "Strength, Constitution";
	setToolProfs();
}

void Barbarian::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 6;
	const char *skills[] = {
		"Animal Handling",
		"Athletics",
		"Intimidation",
		"Nature",
		"Perception",
		"Survival"
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Barbarian::setToolProfs()
{
	toolProfs = "None";
}

/*
====================
Bard class functions
====================
*/

Bard::Bard()
{
	hitDie       = 8;
	className    = "Bard";
	armorProfs   = "Light armor";
	weaponProfs  = "Simple weapons, hand crossbows, longswords,"
	               " rapiers, shortswords";
	savingThrows = "Dexterity, Charisma";
}

void Bard::setSkillProfs()
{
	int cmd1, cmd2, cmd3;
	int amt_of_skills = 17;
	const char *skills[] = {
		"Acrobatics",
		"Animal Handling",
		"Arcana",
		"Deception",
		"History",
		"Insight",
		"Intimidation",
		"Investigation",
		"Medicine",
		"Nature",
		"Perception",
		"Performance",
		"Persuasion",
		"Religion",
		"Sleight of Hand",
		"Stealth",
		"Survival"
	};

	cout << "Choose three of the following skills proficiencies:\n";
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Third skill: ";
		cin  >> cmd3;

		if (cmd3 < 1 || cmd3 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else if (cmd3 == cmd1 || cmd3 == cmd2)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
	skillProfs.append(", ");
	skillProfs.append(skills[cmd3 - 1]);
}

void Bard::setToolProfs()
{
	int cmd1, cmd2, cmd3;
	int amt_of_tools = 10;
	const char *tools[] = {
		"Bagpipes",
		"Drum",
		"Dulcimer",
		"Flute",
		"Lute",
		"Lyre",
		"Horn",
		"Pan flute",
		"Shawm",
		"Viol"
	};

	cout << "Choose three of the following tool proficiencies:\n";
	printList(tools, amt_of_tools);

	for (;;) {
		cout << "First tool: ";
		cin  >> cmd1;

		if (cmd1 < 1 || cmd1 > amt_of_tools)
			cout << "Error: Invalid entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Second tool: ";
		cin  >> cmd2;

		if (cmd2 < 1 || cmd2 > amt_of_tools)
			cout << "Error: Invalid entry" << endl;
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Third tool: ";
		cin  >> cmd3;

		if (cmd3 < 1 || cmd3 > amt_of_tools)
			cout << "Error: Invalid entry" << endl;
		else if (cmd3 == cmd1 || cmd3 == cmd2)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	toolProfs = tools[cmd1 - 1];
	toolProfs.append(", ");
	toolProfs.append(tools[cmd2 - 1]);
	toolProfs.append(", ");
	toolProfs.append(tools[cmd3 - 1]);
}

/*
======================
Cleric class functions
======================
*/

Cleric::Cleric()
{
	hitDie       = 8;
	className    = "Cleric";
	armorProfs   = "Light armor, medium armor, shields";
	weaponProfs  = "All simple weapons";
	savingThrows = "Wisdom, Charisma";
	setToolProfs();
}

void Cleric::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 5;
	const char *skills[] = {
		"History",
		"Insight",
		"Medicine",
		"Persuasion",
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Cleric::setToolProfs()
{
	toolProfs = "None";
}

/*
=====================
Druid class functions
=====================
*/

Druid::Druid()
{
	hitDie       = 8;
	className    = "Druid";
	armorProfs   = "Light armor, medium armor, shields (druids will not "
	               "wear armor or use shields made of metal)";
	weaponProfs  = "Clubs, daggers, darts, javelins, maces, "
	               "quarterstaffs, scimitars, sickles, slings, spears";
	savingThrows = "Intelligence, Wisdom";
	setToolProfs();
}

void Druid::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 8;
	const char *skills[] = {
		"Arcana",
		"Animal Handling",
		"Insight",
		"Medicine",
		"Nature",
		"Perception",
		"Religion",
		"Survival"
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Druid::setToolProfs()
{
	toolProfs = "Herbalism kit";
}

/*
=======================
Fighter class functions
=======================
*/

Fighter::Fighter()
{
	hitDie       = 10;
	className    = "Fighter";
	armorProfs   = "All armor, shields";
	weaponProfs  = "Simple weapons, martial weapons";
	savingThrows = "Strength, Constitution";
	setToolProfs();
}

void Fighter::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 8;
	const char *skills[] = {
		"Acrobatics",
		"Animal Handling",
		"Athletics",
		"History",
		"Insight",
		"Intimidation",
		"Perception",
		"Survival"
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Fighter::setToolProfs()
{
	toolProfs = "None";
}

/*
====================
Monk class functions
====================
*/

Monk::Monk()
{
	hitDie       = 8;
	className    = "Monk";
	armorProfs   = "Light armor";
	weaponProfs  = "None";
	savingThrows = "Strength, Dexterity";
}

void Monk::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 6;
	const char *skills[] = {
		"Acrobatics",
		"Athletics",
		"History",
		"Insight",
		"Religion",
		"Stealth"
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Monk::setToolProfs()
{
	int cmd;
	int amt_of_tools = 27;
	const char *tools[] = {
		"Bagpipes",
		"Drum",
		"Dulcimer",
		"Flute",
		"Lute",
		"Lyre",
		"Horn",
		"Pan flute",
		"Shawm",
		"Viol",
		"Alchemist's supplies",
		"Brewer's supplies",
		"Calligrapher's supplies",
		"Carpenter's tools",
		"Cartographer's tools",
		"Cobbler's tools",
		"Cook's utensils",
		"Glassblower's tools",
		"Jeweler's tools",
		"Leatherworker's tools",
		"Mason's tools",
		"Painter's supplies",
		"Potter's tools",
		"Smith's tools",
		"Tinker's tools",
		"Weaver's tools",
		"Woodcarver's tools"
	};

	cout << "Choose one of the following tool proficiencies:\n";
	printList(tools, amt_of_tools);

	for (;;) {
		cout << "Tool: ";
		cin  >> cmd;

		if (cmd < 1 || cmd > amt_of_tools)
			cout << "Error: Invalid entry" << endl;
		else
			break;
	}

	toolProfs = tools[cmd - 1];
}

/*
=======================
Paladin class functions
=======================
*/

Paladin::Paladin()
{
	hitDie       = 10;
	className    = "Paladin";
	armorProfs   = "All armor, shields";
	weaponProfs  = "Simple weapons, martial weapons";
	savingThrows = "Wisdom, Charisma";
	setToolProfs();
}

void Paladin::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 6;
	const char *skills[] = {
		"Athletics",
		"Insight",
		"Intimidation",
		"Medicine",
		"Persuasion",
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}


void Paladin::setToolProfs()
{
	toolProfs = "None";
}

/*
======================
Ranger class functions
======================
*/

Ranger::Ranger()
{
	hitDie       = 10;
	className    = "Ranger";
	armorProfs   = "Light armor, medium armor, shields";
	weaponProfs  = "Simple weapons, martial weapons";
	savingThrows = "Strength, Dexterity";
	setToolProfs();
}

void Ranger::setSkillProfs()
{
	int cmd1, cmd2, cmd3;
	int amt_of_skills = 8;
	const char *skills[] = {
		"Animal Handling",
		"Athletics",
		"Insight",
		"Investigation",
		"Nature",
		"Perception",
		"Stealth",
		"Survival"
	};

	cout << "Choose three of the following skill proficiencies:\n";
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Third skill: ";
		cin  >> cmd3;

		if (cmd3 < 1 || cmd3 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else if (cmd3 == cmd1 || cmd3 == cmd2)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
	skillProfs.append(", ");
	skillProfs.append(skills[cmd3 - 1]);
}
	

void Ranger::setToolProfs()
{
	toolProfs = "None";
}

/*
=====================
Rogue class functions
=====================
*/

Rogue::Rogue()
{
	hitDie       = 8;
	className    = "Rogue";
	armorProfs   = "Light armor";
	weaponProfs  = "Simple weapons, hand crossbows, longswords, "
	               "rapiers, shortswords";
	savingThrows = "Dexterity, Intelligence";
	setToolProfs();
}

void Rogue::setSkillProfs()
{
	int cmd1, cmd2, cmd3, cmd4;
	int amt_of_skills = 11;
	const char *skills[] = {
		"Acrobatics",
		"Athletics",
		"Deception",
		"Insight",
		"Intimidation",
		"Investigation",
		"Perception",
		"Performance",
		"Persuasion",
		"Sleight of Hand",
		"Stealth"
	};

	cout << "Choose four of the following skill proficiencies:\n";
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Third skill: ";
		cin  >> cmd3;

		if (cmd3 < 1 || cmd3 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else if (cmd3 == cmd1 || cmd3 == cmd2)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	for (;;) {
		cout << "Fourth skill: ";
		cin  >> cmd4;

		if (cmd4 < 1 || cmd4 > amt_of_skills)
			cout << "Error: Invalid entry" << endl;
		else if (cmd4 == cmd1 || cmd4 == cmd2 || cmd4 == cmd3)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
	skillProfs.append(", ");
	skillProfs.append(skills[cmd3 - 1]);
	skillProfs.append(", ");
	skillProfs.append(skills[cmd4 - 1]);
}

void Rogue::setToolProfs()
{
	toolProfs = "Thieves's tools";
}

/*
========================
Sorcerer class functions
========================
*/

Sorcerer::Sorcerer()
{
	hitDie       = 6;
	className    = "Sorcerer";
	armorProfs   = "None";
	weaponProfs  = "Daggers, darts, slings, quarterstaffs";
	savingThrows = "Constitution, Charisma";
	setToolProfs();
}

void Sorcerer::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 6;
	const char *skills[] = {
		"Arcana",
		"Deception",
		"Insight",
		"Intimidation",
		"Persuasion",
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Sorcerer::setToolProfs()
{
	toolProfs = "None";
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
		else if (cmd2 == cmd1)
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

/*
======================
Wizard class functions
======================
*/

Wizard::Wizard()
{
	hitDie       = 6;
	className    = "Wizard";
	armorProfs   = "None";
	weaponProfs  = "Daggers, darts, slings, quarterstaffs, light crossbows";
	savingThrows = "Intelligence, Wisdom";
	setToolProfs();
}

void Wizard::setSkillProfs()
{
	int cmd1, cmd2;
	int amt_of_skills = 6;
	const char *skills[] = {
		"Arcana",
		"History",
		"Insight",
		"Investigation",
		"Medicine",
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
		else if (cmd2 == cmd1)
			cout << "Error: Must choose a different entry" << endl;
		else
			break;
	}

	skillProfs = skills[cmd1 - 1];
	skillProfs.append(", ");
	skillProfs.append(skills[cmd2 - 1]);
}

void Wizard::setToolProfs()
{
	toolProfs = "None";
}
