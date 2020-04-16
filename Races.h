#pragma once
#include <string>

/*
class PlayerRace {

private:
	string name;
	int health;
	string abilityScoreIncrease;
	int age;
	string allignment;
	double size;
	int speed;
	string Languages;
	string race;

public:
	string setName();
	int setHealth();
	string setAbilityScoreIncrease();
	int setAge();
	string setAllignment();
	double setSize();
	int setSpeed();
	string setLanguage();
	string setRace();

	void virtual print();

	getName();
	getHealth();
	getAbilityScore();
	getAge();
	getAllignment();
	getSize();
	getSpeed();
	getLanguage();
	getRace();



};
*/


class HillDwarf{

private:
	string name;
	int health;
	string race = "HillDwarf";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Wisdom +1, Constitution +2";
	string skills[20] = ["Darkvision", "Dwarven resilience", "Stone cutting", "Dwarven Toughness"];
	string proficiency[20] = ["battle Axe", "hand axe", "light hammer", "war hammer"];
	string language[10] = ["Common", "Dwarvish"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};

class MountainDwarf{

private:
	string name;
	int health;
	string race = "Mountain Dwarf";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Strength +2, Constitution +2";
	string skills[20] = ["Darkvision", "Dwarven resilience", "Stone cutting", "Dwarven Armor Training"];
	string proficiency[20] = ["battle Axe", "hand axe", "light hammer", "war hammer", "Light armor", "Medium armor"];
	string language[10] = ["Common", "Dwarvish"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};

class HighElf{

private:
	string name;
	int health;
	string race = "High Elf";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "Dexterity +2, Intelegence +2";
	string skills[20] = ["Darkvision",  "Fey Ancestry", "Trance"];
	string proficiency[20] = ["perception", "Long sword", "Short Sword", "Short Bow", "Long Bow"];
	string Language[20] = ["Elvish", "Common"];


public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};


class WoodElf {

private:
	string name;
	int health;
	string race = "Wood Elf";
	string age;
	string allignment;
	int size;
	int speed = 35;
	string abilityScoreIncrease = "Dexterity +2, Wisdom +1";
	string skills[20] = ["Darkvision", "Fey Ancestry", "Trance", "Mask of the Wild"];
	string proficiency[20] = ["perception", "Long sword", "Short Sword", "Short Bow", "Long Bow"];
	string language[20] = ["Elvish", "Common"];


public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};


class DarkElf {

private:
	string name;
	int health;
	string race = "Dark Elf";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "Dexterity +2, Charisma + 1";
	string skills[20] = ["Darkvision", "Fey Ancestry", "Trance", "Superior Darkvision of 120ft.", "Sunlight Sensitivity"];
	string proficiency[20] = ["perception", "Rapiers", "Short Sword", "Hand Crossbows"];
	string spells[3] = ["Dancing Lights", "Faerie Fire(Level 3)", "Darkness (Level 5)"];
	string languages[20] = ["Elvish", "Common"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProficiency();

	void print();

};

class LightFoot {

private:
	string name;
	int health;
	string race = "LightFoot";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Dexterity + 2, Chrisma +1";
	string skills[20] = ["Brave", "Lucky", "Halfling Nimbleness", "Naturally Stealthy"];
	string proficiency[20];
	string languages[20] = ["Common", "Halfling"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProficiency();

	void print();

};

class Stout {

private:
	string name;
	int health;
	string race = "Stout";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Dexterity + 2, Constitution +1";
	string skills[20] = ["Brave", "Lucky", "Halfling Nimbleness", "Stout Resilience"];
	string proficiency[20];
	string languages[20] = ["Common", "Halfling"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProficiency();

	void print();

};

class Human {

private:
	string name;
	int health;
	string race = "Human";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "any +1";
	string skills[20];
	string proficiency[20] = [""];
	string languages[20] = ["Common"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProficiency();

	void print();

};

class DragonBorn {

private:
	string name;
	int health;
	string race = "DragonBorn";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "Strength +2, Chrisma +1";
	string skills[20] = ["Draconic Ancestry", "Breath Weapon", "Damage Resistance"];
	string proficiency[20];
	string languages[20] = ["Common", "Draconic"];
	string Ancestry;

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();
	string setAncestry;

	string addSkill();
	string addProficiency();

	void print();

};

class ForestGnome {

private:
	string name;
	int health;
	string race = "Forest Gnome";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Intelligence +2, Dexterity +1";
	string skills[20] = ["Darkvision", "Gnome Cunning", " Natural Illusionist", "Speaking with Small Beast"];
	string proficiency[20];
	string languages[20] = ["Common", "Gnome"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProficiency();

	void print();

};

class RockGnome{

private:
	string name;
	int health;
	string race = "Rock Gnome";
	string age;
	string allignment;
	int size;
	int speed = 25;
	string abilityScoreIncrease = "Intelligence +2, Constitution +1";
	string skills[20] = ["Darkvision", "Gnome Cunning", "Artificer's Lore", "Tinkers"];
	string proficiency[20];
	string languages[20] = ["Common", "Gnome"];
	string Tinkers;

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();
	string setTinkers();

	string addSkill();
	string addProfiviency();

	void print();

};

class  HalfElf{

private:
	string name;
	int health;
	string race = "Half Elf";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "CHarisma +2 and +1 to any of choice";
	string skills[20] = ["Darkvision", "Fey ancestry"];
	string proficiency[20];
	string languages[20] = ["Common", "Elvish"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};

class HalfOrc{

private:
	string name;
	int health;
	string race = "Half Orc";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "Strength +2, Constitution +1";
	string skills[20] = ["Darkvision", "Relentless Endurance", "Savage Attacks"];
	string proficiency[20] = ["intimidation"];
	string languages[20] = ["Common", "orc"];

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};

class Tiefling{

private:
	string name;
	int health;
	string race = "Tiefling";
	string age;
	string allignment;
	int size;
	int speed = 30;
	string abilityScoreIncrease = "Intelligence +1, Charisma +2";
	string skills[20] = ["Darkvision", "Hellish Resistance", "Infernal Legacy"];
	string proficiency[20];
	string languages[20] = ["Common", "Infernal"];
	string infernalLegacy[3] = ["thaumaturgy", "Hellish Rebuke(Level 3)", "Darkness (Level 5)"]

public:
	string setName();
	int setHealth();
	string setAge();
	string setAllignment();
	int setSize();
	string setLanguage();

	string addSkill();
	string addProfiviency();

	void print();

};