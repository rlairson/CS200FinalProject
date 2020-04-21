#ifndef RACESV2_H
#define RACESV2_H
#include "RacesV2.h"
#endif

enum {
	CHAOTIC_E = 1,
	CHAOTIC_N,
	CHAOTIC_L,
	NEUTRAL,
	LAWFUL_G,
	LAWFUL_N,
	LAWFUL_E
};

/*
====================
Race class functions
====================
*/

void Race::setName()
{
	string name;

	cout << "Enter the character's name: ";
	cin  >> name;
	playerName = name;
};

void Race::setHealth(int totalHealth)
{
	health = totalHealth;
};

void Race::setAlignment()
{
	int cmd;
	const char *alignments[] = {
		"Chaotic Evil",
		"Chaotic Neutral",
		"Chaotic Lawful",
		"Neutral",
		"Lawful Good",
		"Lawful Neutral",
		"Lawful Evil"
	};

	cout << "List of alignments:\n";
	printList(alignments, 7);

	for (;;) {
		cout << "Enter the alignment of the character: ";
		cin  >> cmd;

		if (cmd < 1 || cmd > 7)
			cout << "Error: Invalid entry" << endl;
		else
			break;
	}

	alignment = alignments[cmd - 1];
}

string Race::getPlayerName()
{
	return playerName;
}

string Race::getRaceName()
{
	return raceName;
}

int Race::getHealth()
{
	return health;
}

string Race::getAge()
{
	return age;
}

string Race::getAlignment()
{
	return alignment;
}

string Race::getSize()
{
	return size;
}

int Race::getSpeed()
{
	return speed;
}

int Race::getStrBonus()
{
	return strBonus;
}

int Race::getWisBonus()
{
	return wisBonus;
}

int Race::getConBonus()
{
	return conBonus;
}

int Race::getDexBonus()
{
	return dexBonus;
}

int Race::getIntBonus()
{
	return intBonus;
}

int Race::getChaBonus()
{
	return chaBonus;
}

string Race::getRaceSkills()
{
	return raceSkills;
}

string Race::getRaceWeaponProfs()
{
	return raceProfs;
}

string Race::getLanguages()
{
	return languages;
}

void Race::printList(const char *list[], int n)
{
	/* Cycle through the list, printing each entry */
	for (int i = 0; i < n; i++)
		printf("\t%2d. %s\n", i+1, list[i]);
}

/*
=========================
HillDwarf class functions
=========================
*/

HillDwarf::HillDwarf()
{
	raceName   = "Hill Dwarf";
	size       = "Medium";
	speed      = 25;
	strBonus   = 0;
	wisBonus   = 1;
	conBonus   = 2;
	dexBonus   = 0;
	intBonus   = 0;
	chaBonus   = 0;
	raceSkills = "Darkvision, Dwarven Resilience, Dwarven Combat Training, "
	             "Stonecunning, Dwarven Toughness";
	languages  = "Common, Dwarvish";
	raceProfs  = "Battleaxe, Handaxe, Throwing Hammer, Warhammer";
}

void HillDwarf::setAge()
{
	string rAge;

	cout << "Dwarvess mature at the age of 50 and live to aroung 350 years old.\n";

	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=============================
MountainDwarf class functions
=============================
*/

MountainDwarf::MountainDwarf()
{
	raceName   = "Mountain Dwarf";
	size       = "Medium";
	speed      = 25;
	strBonus   = 2;
	wisBonus   = 0;
	conBonus   = 2;
	dexBonus   = 0;
	intBonus   = 0;
	chaBonus   = 0;
	raceSkills = "Darkvision, Dwarven Resilience, Dwarven Combat Training, "
	             "Stonecunning, Dwarven Armor Training";
	languages  = "Common, Dwarvish";
	raceProfs  = "Battleaxe, Handaxe, Throwing Hammer, Warhammer";
}

void MountainDwarf::setAge()
{
	string rAge;

	cout << "Dwarves mature at the age of 50 and live to aroung 350 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=======================
HighElf class functions
=======================
*/

HighElf::HighElf()
{
	raceName   = "High Elf";
	size       = "Medium";
	speed      = 30;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 2;
	intBonus   = 1;
	chaBonus   = 0;
	raceSkills = "Darkvision, Fey Ancestry, Trance";
	languages  = "Common, Elvish";
	raceProfs  = "Perception, Long Sword, Short Sword, Short Bow, Long Bow";
}

void HighElf::setAge()
{
	string rAge;

	cout << "Elves mature at the age of 100 and live to be about 750 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=======================
WoodElf class functions
=======================
*/

WoodElf::WoodElf()
{
	raceName   = "Wood Elf";
	size       = "Medium";
	speed      = 35;
	strBonus   = 0;
	wisBonus   = 1;
	conBonus   = 0;
	dexBonus   = 2;
	intBonus   = 0;
	chaBonus   = 0;
	raceSkills = "Darkvision, Fey Ancestry, Trance, Mask of the Wild";
	languages  = "Common, Elvish";
	raceProfs  = "Perception, Long Sword, Short Sword, Short Bow, Long Bow";
}

void WoodElf::setAge()
{
	string rAge;

	cout << "Elves mature at the age of 100 and live to be about 750 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=======================
DarkElf class functions
=======================
*/

DarkElf::DarkElf()
{
	raceName   = "Dark Elf";
	size       = "Medium";
	speed      = 30;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 2;
	intBonus   = 0;
	chaBonus   = 1;
	raceSkills = "Darkvision, Fey Ancestry, Trance, Superior Darkvision, "
	             "Sunlight Sensitivity, Drow Magic, Drow Weapon Training";
	languages  = "Common, Elvish";
	raceProfs  = "Perception, Rapiers, Short Sword, Hand Crossbow";
}

void DarkElf::setAge()
{
	string rAge;

	cout << "Elves mature at the age of 100 and live to be about 750 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=========================
Lightfoot class functions
=========================
*/

Lightfoot::Lightfoot()
{
	raceName   = "Lightfoot";
	size       = "Small";
	speed      = 25;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 2;
	intBonus   = 0;
	chaBonus   = 1;
	raceSkills = "Brave, Lucky, Halfling Numbleness, Naturally Stealthy";
	languages  = "Common, Halfling";
	raceProfs  = "None";
}

void Lightfoot::setAge()
{
	string rAge;

	cout << "Halflings mature at the age of 20 and live to be about 250 years old\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=====================
Stout class functions
=====================
*/

Stout::Stout()
{
	raceName   = "Stout";
	size       = "Small";
	speed      = 25;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 1;
	dexBonus   = 2;
	intBonus   = 0;
	chaBonus   = 0;
	raceSkills = "Brave, Lucky, Halfling Numbleness, Stout Resilience";
	languages  = "Common, Halfling";
	raceProfs  = "None";
}

void Stout::setAge()
{
	string rAge;

	cout << "Halflings mature at the age of 20 and live to be about 250 years old\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=====================
Human class functions
=====================
*/

Human::Human()
{
	raceName   = "Human";
	size       = "Medium";
	speed      = 30;
	strBonus   = 1;
	wisBonus   = 1;
	conBonus   = 1;
	dexBonus   = 1;
	intBonus   = 1;
	chaBonus   = 1;
	raceSkills = "None";
	languages  = "Common";
	raceProfs  = "None";
}

void Human::setAge()
{
	string rAge;

	cout << "Humans mature in their late teens and live less than a century.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
==========================
DragonBorn class functions
==========================
*/

DragonBorn::DragonBorn()
{
	raceName   = "Dragonborn";
	size       = "Medium";
	speed      = 30;
	strBonus   = 2;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 0;
	intBonus   = 0;
	chaBonus   = 1;
	raceSkills = "Dragonic Ancestry, Breath Weapon, Damage Resistance";
	languages  = "Common, Dragonic";
	raceProfs  = "None";
}
void DragonBorn::setAge()
{
	string rAge;

	cout << "Dragonborns reach adulthood at the age of 15 and live to be 80.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
===========================
ForestGnome class functions
===========================
*/

ForestGnome::ForestGnome()
{
	raceName   = "Forest Gnome";
	size       = "Small";
	speed      = 25;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 1;
	intBonus   = 2;
	chaBonus   = 0;
	raceSkills = "Darkvision, Gnome Cunning, Natural Illusionist, "
	             "Speaking with Small Beasts";
	languages  = "Common, Gnome";
	raceProfs  = "None";
}

void ForestGnome::setAge()
{
	string rAge;

	cout << "Gnomes mature at the age of 40 and live to be between 350 and 500 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=========================
RockGnome class functions
=========================
*/

RockGnome::RockGnome()
{
	raceName   = "Rock Gnome";
	size       = "Small";
	speed      = 25;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 1;
	dexBonus   = 0;
	intBonus   = 2;
	chaBonus   = 0;
	raceSkills = "Darkvision, Gnome Cunning, Artificer's Lore, Tinker";
	languages  = "Common, Gnome";
	raceProfs  = "None";
}

void RockGnome::setAge()
{
	string rAge;

	cout << "Gnomes mature at the age of 40 and live to be between 350 and 500 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=======================
HalfElf class functions
=======================
*/

HalfElf::HalfElf()
{
	raceName   = "Half Elf";
	size       = "Medium";
	speed      = 30;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 0;
	intBonus   = 0;
	chaBonus   = 2;
	raceSkills = "Darkvision, Fey Ancestry";
	languages  = "Common, Elvish";
	raceProfs  = "None";
}

void HalfElf::setAge()
{
	string rAge;

	cout << "Half Elves mature at the age of 20 and exceed 180 years old.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
=======================
HalfOrc class functions
=======================
*/

HalfOrc::HalfOrc()
{
	raceName   = "Half Orc";
	size       = "Medium";
	speed      = 30;
	strBonus   = 2;
	wisBonus   = 0;
	conBonus   = 1;
	dexBonus   = 0;
	intBonus   = 0;
	chaBonus   = 0;
	raceSkills = "Darkvision, Relentless Endurance, Savage Attacks";
	languages  = "Common, Orc";
	raceProfs  = "Intimidation";
}

void HalfOrc::setAge()
{
	string rAge;

	cout << "Half-orcs mature by the age of 14 and live to be no older than 75.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}

/*
========================
Tiefling class functions
========================
*/

Tiefling::Tiefling()
{
	raceName   = "Tiefling";
	size       = "Medium";
	speed      = 30;
	strBonus   = 0;
	wisBonus   = 0;
	conBonus   = 0;
	dexBonus   = 0;
	intBonus   = 1;
	chaBonus   = 2;
	raceSkills = "Darkvision, Hellish Resistance, Infernal Legacy";
	languages  = "Common, Infernal";
	raceProfs  = "Thaumaturgy";
}

void Tiefling::setAge()
{
	string rAge;

	cout << "Tieflings mature at the same rate as humans, but live a few years longer.\n";
	cout << "Enter the age of your character (in years): ";
	cin  >> rAge;

	age = rAge;
}
