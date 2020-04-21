#include "Races.h"


/*Hill Dwarf*/
HillDwarf::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

HillDwarf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

HillDwarf::setAge() {

	cout >> "Dwarf's mature at the age of 50 and live to aroung 350 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

HillDwarf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

HillDwarf::setSize() {

	cout >> "Dwarf's are between 4 and 5 feet tall and weight on average 150 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}


/*Mountain Dwarf*/
MountainDwaft::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

MountainDwarf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

MountainDwarf::setAge() {

	cout >> "Dwarf's mature at the age of 50 and live to aroung 350 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

MountainDwarf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

MountainDwarf::setSize() {

	cout >> "Dwarf's are between 4 and 5 feet tall and weight on average 150 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*High Elf*/

HighElf::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

HighElf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

HighElf::setAge() {

	cout >> "Elves mature ate teh age of 100 and live to be about 750 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

HighElf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

HighElf::setSize() {

	cout >> "Elves range from 5 to 6 feet and have slender builds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Wood Elf*/
WoodElf::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

WoodElf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

WoodElf::setAge() {

	cout >> "Elves mature ate teh age of 100 and live to be about 750 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

WoodElf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

WoodElf::setSize() {

	cout >> "Elves range from 5 to 6 feet and have slender builds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Dark Elf*/

DarkElf::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

DarkElf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

DarkElf::setAge() {

	cout >> "Elves mature ate teh age of 100 and live to be about 750 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

DarkElf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

DarkElf::setSize() {

	cout >> "Elves range from 5 to 6 feet and have slender builds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*LightFoot*/

LightFoot::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

LightFoot::setHealth(int totalHealth) {

	this->health = totalHealth;

}

LightFoot::setAge() {

	cout >> "Heiflings mature at the age of 20 and live to be about 250 years old";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

LightFoot::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

LightFoot::setSize() {

	cout >> "Halflings are 3 feet tall on average and weigh about 40 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Stout*/

Stout::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

Stout::setHealth(int totalHealth) {

	this->health = totalHealth;

}

Stout::setAge() {

	cout >> "Heiflings mature at the age of 20 and live to be about 250 years old";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

Stout::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

Stout::setSize() {

	cout >> "Halflings are 3 feet tall on average and weigh about 40 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Human*/

Human::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

Human::setHealth(int totalHealth) {

	this->health = totalHealth;

}

Human::setAge() {

	cout >> "Humans mature in their late teens and live less than a century";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

Human::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

Human::setSize() {

	cout >> "Humans heights range from 5 to 6 feet and have a medium build";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Dragon Born*/

DragonBorn::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

DragonBorn::setHealth(int totalHealth) {

	this->health = totalHealth;

}

DragonBorn::setAge() {

	cout >> "DragonBorns reach adult hood at the age of 15 and live to be 80";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

DragonBorn::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

DragonBorn::setSize() {

	cout >> "Dragon Borns grow to be taller than 6 feet and averaging 250 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

DragonBorn::setAncestry() {

	cout >> "Black 	    Acid 	    5 by 30 ft. line (Dex. save)\n"
		>> "Blue 	    Lightning 	5 by 30 ft.line(Dex.save)\n"
		>> "Brass 	    Fire 	    5 by 30 ft.line(Dex.save)\n"
		>> "Bronze 		Lightning 	5 by 30 ft.line(Dex.save)\n"
		>> "Copper 		Acid 	    5 by 30 ft.line(Dex.save)\n"
		>> "Gold 	    Fire 	    15 ft.cone(Dex.save)\n"
		>> "Green 	    Poison 	    15 ft.cone(Con.save)\n"
		>> "Red 	    Fire 	    15 ft.cone(Dex.save)\n"
		>> "Silver		Cold 	    15 ft.cone(Con.save)\n"
		>> "White 	    Cold        15 ft. cone (Con. save)\n";
	cout >> "Enter the family Ancestry: ";
	getline(cin, ancestry);

	this->setAncestry = ancestry;
}

/*Forest Gnome*/

ForestGnome::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

ForestGnome::setHealth(int totalHealth) {

	this->health = totalHealth;

}

ForestGnome::setAge() {

	cout >> "Gnomes mature at the age of 40 and live to be between 350 and 500 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

ForestGnome::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

ForestGnome::setSize() {

	cout >> "Gnomes are between 3 and 4 feet tall and weigh about 40 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Rock Gnome*/

RockGnome::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

RockGnome::setHealth(int totalHealth) {

	this->health = totalHealth;

}

RockGnome::setAge() {

	cout >> "Gnomes mature at the age of 40 and live to be between 350 and 500 years old.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

RockGnome::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

RockGnome::setSize() {

	cout >> "Gnomes are between 3 and 4 feet tall and weigh about 40 pounds";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}


/*Half Elf*/

HalfElf::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

HalfElf::setHealth(int totalHealth) {

	this->health = totalHealth;

}

HalfElf::setAge() {

	cout >> "Half Elves mature at the age of 20 and exceed 180 years old";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

HalfElf::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

HalfElf::setSize() {

	cout >> "Half Elves grow to be 5 to 6 feet tall with a medium size";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Half Orc*/

HalfORc::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

HalfOrc::setHealth(int totalHealth) {

	this->health = totalHealth;

}

HalfOrc::setAge() {

	cout >> "Half-orcs mature by the age of 14 and live to be no older than 75";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

HalfOrc::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

HalfOrc::setSize() {

	cout >> "Half Orcs grow to be about 5 to 6 feet and of a medium size";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}

/*Tiefling*/
Tiefling::setName() {

	cout >> "Enter the character name: ";
	getline(cin, name);

	this->name = name;

}

Tiefling::setHealth(int totalHealth) {

	this->health = totalHealth;

}

Tiefling::setAge() {

	cout >> "Tieflings mature at the same rate as humans and live to few years older than humans.";
	cout >> "Enter the age of your character?";
	getline(cin, age);

	this->age = age;

}

Tiefling::setAllignment() {

	cout >> "List of alignments:"
		>> "Chaotic Evil\n"
		>> "Chaotic Neutral\n"
		>> "Chaotic Lawful\n"
		>> "Neutral\n"
		>> "Lawful Good\n"
		>> "Lawful Neutral\n"
		>> "Lawful Evil\n";
	cout >> "Enter the alignment of the character: ";
	getline(cin, alignment);

	this->alignment = alignment;

}

Tiefling::setSize() {

	cout >> "Tieflings grow to be the same size as humans and have a medium build";
	cout >> "Enter the size of the character: ";
	getline(cin, size);

	this->size = size;


}
