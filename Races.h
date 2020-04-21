#include <string>
#include <iostream>
using namespace std;



class HillDwarf{

private:
	string name;
	string race = "HillDwarf";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 0;
	int wisdom = 1;
	int constitution = 2;
	int dexterity = 0;
	int intelegence = 0;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Dwarven resilience", "Stone cutting", "Dwarven Toughness" };
	string proficiency[20] = { "battle Axe", "hand axe", "light hammer", "war hammer" };
	string language[10] = {"Common", "Dwarvish"};

public:

	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class MountainDwarf{

private:
	string name;
	string race = "Mountain Dwarf";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 2;
	int wisdom = 0;
	int constitution = 2;
	int dexterity = 0;
	int intelegence = 0;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Dwarven resilience", "Stone cutting", "Dwarven Armor Training" };
	string proficiency[20] = { "battle Axe", "hand axe", "light hammer", "war hammer", "Light armor", "Medium armor" };
	string language[10] = { "Common", "Dwarvish" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class HighElf{

private:
	string name;
	string race = "High Elf";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength = 0;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 2;
	int intelegence = 2;
	int charisma = 0;
	string skills[20] = { "Darkvision",  "Fey Ancestry", "Trance" };
	string proficiency[20] = { "perception", "Long sword", "Short Sword", "Short Bow", "Long Bow" };
	string Language[20] = { "Elvish", "Common" };


public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};


class WoodElf {

private:
	string name;
	string race = "Wood Elf";
	string age;
	string alignment;
	int size;
	int speed = 35;
	int strength = 0;
	int wisdom = 1;
	int constitution = 0;
	int dexterity = 2;
	int intelegence = 0;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Fey Ancestry", "Trance", "Mask of the Wild" };
	string proficiency[20] = { "perception", "Long sword", "Short Sword", "Short Bow", "Long Bow" };
	string language[20] = { "Elvish", "Common" };


public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};


class DarkElf {

private:
	string name;
	string race = "Dark Elf";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength = 0;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 2;
	int intelegence = 0;
	int charisma = 1;
	string skills[20] = { "Darkvision", "Fey Ancestry", "Trance", "Superior Darkvision of 120ft.", "Sunlight Sensitivity" };
	string proficiency[20] = { "perception", "Rapiers", "Short Sword", "Hand Crossbows" };
	string spells[3] = { "Dancing Lights", "Faerie Fire(Level 3)", "Darkness (Level 5)" };
	string language[20] = { "Elvish", "Common" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class LightFoot {

private:
	string name;
	string race = "LightFoot";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 0;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 2;
	int intelegence = 0;
	int charisma = 1;
	string skills[20] = { "Brave", "Lucky", "Halfling Nimbleness", "Naturally Stealthy" };
	string proficiency[20];
	string language[20] = { "Common", "Halfling" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class Stout {

private:
	string name;
	string race = "Stout";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 0;
	int wisdom = 0;
	int constitution = 1;
	int dexterity = 2;
	int intelegence = 0;
	int charisma = 0;
	string skills[20] = { "Brave", "Lucky", "Halfling Nimbleness", "Stout Resilience" };
	string proficiency[20];
	string language[20] = { "Common", "Halfling" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class Human {

private:
	string name;
	string race = "Human";
	string age;
	string alignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "any +1";
	int strength = 1;
	int wisdom = 1;
	int constitution = 1;
	int dexterity = 1;
	int intelegence = 1;
	int charisma = 1;
	string skills[20];
	string proficiency[20] = { "" };
	string language[20] = { "Common" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class DragonBorn {

private:
	string name;
	string race = "DragonBorn";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength = 2;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 0;
	int intelegence = 0;
	int charisma = 1;
	string skills[20] = { "Draconic Ancestry", "Breath Weapon", "Damage Resistance" };
	string proficiency[20];
	string language[20] = { "Common", "Draconic" };
	string Ancestry;

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();
	string setAncestry();

	void print();

};

class ForestGnome {

private:
	string name;
	string race = "Forest Gnome";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 0;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 1;
	int intelegence = 2;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Gnome Cunning", " Natural Illusionist", "Speaking with Small Beast" };
	string proficiency[20];
	string language[20] = { "Common", "Gnome" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class RockGnome {

private:
	string name;
	string race = "Rock Gnome";
	string age;
	string alignment;
	int size;
	int speed = 25;
	int strength = 0;
	int wisdom = 0;
	int constitution = 1;
	int dexterity = 0;
	int intelegence = 2;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Gnome Cunning", "Artificer's Lore", "Tinkers" };
	string proficiency[20];
	string language[20] = {"Common", "Gnome"};

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class  HalfElf{

private:
	string name;
	string race = "Half Elf";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength;
	int wisdom;
	int constitution;
	int dexterity;
	int intelegence;
	int charisma;
	string skills[20] = { "Darkvision", "Fey ancestry" };
	string proficiency[20];
	string language[20] = { "Common", "Elvish" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class HalfOrc{

private:
	string name;
	string race = "Half Orc";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength = 2;
	int wisdom = 0;
	int constitution = 1;
	int dexterity = 0;
	int intelegence = 0;
	int charisma = 0;
	string skills[20] = { "Darkvision", "Relentless Endurance", "Savage Attacks" };
	string proficiency[20] = { "intimidation" };
	string language[20] = { "Common", "orc" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};

class Tiefling{

private:
	string name;
	string race = "Tiefling";
	string age;
	string alignment;
	int size;
	int speed = 30;
	int strength = 0;
	int wisdom = 0;
	int constitution = 0;
	int dexterity = 0;
	int intelegence = 1;
	int charisma = 1;
	string skills[20] = { "Darkvision", "Hellish Resistance", "Infernal Legacy" };
	string proficiency[20];
	string language[20] = { "Common", "Infernal" };
	string infernalLegacy[3] = { "thaumaturgy", "Hellish Rebuke(Level 3)", "Darkness (Level 5)" };

public:
	string setName();
	string setAge();
	string setAlignment();
	int setSize();

	void print();

};