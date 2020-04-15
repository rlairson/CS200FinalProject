#include"player.h"

Player::Player() {
	for (int i = 1; i <= 6; i++) {
		setRaceStatBonus(i, 0);
	}
	//setRace(1);	//This way there is no class until the user selects it
	//setClass(1);
	srand(time(NULL));
}

Player::Player(int pRace, int pClass) {
	for (int i = 1; i <= 6; i++) {
		setRaceStatBonus(i, 0);
	}
	setRace(pRace);
	setClass(pClass);
	isRaceSet = true;
	isClassSet = true;
	srand(time(NULL));
}

bool Player::getIsRaceSet() {
	return isRaceSet;
}

bool Player::getIsClassSet() {
	return isClassSet;
}

void Player::setRaceStatBonus(int stat, int amount) {
	switch (stat) {
		case 1: raceStr = amount;
			break;
		case 2: raceDex = amount;
			break;
		case 3: raceCon = amount;
			break;
		case 4: raceInt = amount;
			break;
		case 5: raceWis = amount;
			break;
		case 6: raceCha = amount;
			break;
	}
}

int Player::getStat(int num) {
	switch (num) {
		case 1:
			return strength;
		case 2:
			return dexterity;
		case 3:
			return constitution;
		case 4:
			return intelligence;
		case 5:
			return wisdom;
		case 6:
			return charisma;
	}
}

void Player::swapStat(int first, int second) {
	//Swap score of first with score of second
	int temp;
	if (first == 1) {
		if (second == 1) {
		}
		else if (second == 2) {
			temp = strength;
			strength = dexterity;
			dexterity = temp;
		}
		else if (second == 3) {
			temp = strength;
			strength = constitution;
			constitution = temp;
		}
		else if (second == 4) {
			temp = strength;
			strength = intelligence;
			intelligence = temp;
		}
		else if (second == 5) {
			temp = strength;
			strength = wisdom;
			wisdom = temp;
		}
		else if (second == 6) {
			temp = strength;
			strength = charisma;
			charisma = temp;
		}
	}
	else if (first == 2) {
		if (second == 1) {
			temp = dexterity;
			dexterity = strength;
			strength = temp;
		}
		else if (second == 2) {
		}
		else if (second == 3) {
			temp = dexterity;
			dexterity = constitution;
			constitution = temp;
		}
		else if (second == 4) {
			temp = dexterity;
			dexterity = intelligence;
			intelligence = temp;
		}
		else if (second == 5) {
			temp = dexterity;
			dexterity = wisdom;
			wisdom = temp;
		}
		else if (second == 6) {
			temp = dexterity;
			dexterity = charisma;
			charisma = temp;
		}
	}
	else if (first == 3) {
		if (second == 1) {
			temp = constitution;
			constitution = strength;
			strength = temp;
		}
		else if (second == 2) {
			temp = constitution;
			constitution = dexterity;
			dexterity = temp;
		}
		else if (second == 3) {
		}
		else if (second == 4) {
			temp = constitution;
			constitution = intelligence;
			intelligence = temp;
		}
		else if (second == 5) {
			temp = constitution;
			constitution = wisdom;
			wisdom = temp;
		}
		else if (second == 6) {
			temp = constitution;
			constitution = charisma;
			charisma = temp;
		}
	}
	else if (first == 4) {
		if (second == 1) {
			temp = intelligence;
			intelligence = strength;
			strength = temp;
		}
		else if (second == 2) {
			temp = intelligence;
			intelligence = dexterity;
			dexterity = temp;
		}
		else if (second == 3) {
			temp = intelligence;
			intelligence = constitution;
			constitution = temp;
		}
		else if (second == 4) {
		}
		else if (second == 5) {
			temp = intelligence;
			intelligence = wisdom;
			wisdom = temp;
		}
		else if (second == 6) {
			temp = intelligence;
			intelligence = charisma;
			charisma = temp;
		}
	}
	else if (first == 5) {
		if (second == 1) {
			temp = wisdom;
			wisdom = strength;
			strength = temp;
		}
		else if (second == 2) {
			temp = wisdom;
			wisdom = dexterity;
			dexterity = temp;
		}
		else if (second == 3) {
			temp = wisdom;
			wisdom = constitution;
			constitution = temp;
		}
		else if (second == 4) {
			temp = wisdom;
			wisdom = intelligence;
			intelligence = temp;
		}
		else if (second == 5) {
		}
		else if (second == 6) {
			temp = wisdom;
			wisdom = charisma;
			charisma = temp;
		}
	}
	else if (first == 6) {
		if (second == 1) {
			temp = charisma;
			charisma = strength;
			strength = temp;
		}
		else if (second == 2) {
			temp = charisma;
			charisma = dexterity;
			dexterity = temp;
		}
		else if (second == 3) {
			temp = charisma;
			charisma = constitution;
			constitution = temp;
		}
		else if (second == 4) {
			temp = charisma;
			charisma = intelligence;
			intelligence = temp;
		}
		else if (second == 5) {
			temp = charisma;
			charisma = wisdom;
			wisdom = temp;
		}
		else if (second == 6) {
		}
	}
}

void Player::printPlayerStats() {
	cout << "\n\tStrength: " << strength+raceStr << " (" <<(strength+raceStr-10)/2<<")"
		<< "\n\tDexterity: " << dexterity+raceDex << " (" << (dexterity+raceDex - 10) / 2 << ")"
		<< "\n\tConstitution: " << constitution+raceCon << " (" << (constitution+raceCon - 10) / 2 << ")"
		<< "\n\tIntelligence: " << intelligence+raceInt << " (" << (intelligence+raceInt - 10) / 2 << ")"
		<< "\n\tWisdom: " << wisdom+raceWis << " (" << (wisdom+raceWis - 10) / 2 << ")"
		<< "\n\tCharisma: " << charisma+raceCha << " (" << (charisma+raceCha - 10) / 2 << ")"
		<< endl;
}

int Player::rollDice() {
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	int roll3 = rand() % 6 + 1;
	//cout << "Roll: " << roll1 + roll2 + roll3 << endl;
	return roll1 + roll2 + roll3;
}

void Player::setPlayerStats() {
	strength = rollDice();
	dexterity = rollDice();
	constitution = rollDice();
	intelligence = rollDice();
	wisdom = rollDice();
	charisma = rollDice();
}

void Player::setRaceStats(int pRace) {
	switch (pRace) {
		case 1: //Dwarf
			race = "Dwarf";
			isRaceSet = true;
			setRaceStatBonus(3, 2);
			break;
		case 2: //Elf
			race = "Elf";
			isRaceSet = true;
			setRaceStatBonus(2, 2);
			break;
		case 3: //Halfling
			race = "Halfling";
			isRaceSet = true;
			setRaceStatBonus(2, 2);
			break;
		case 4: //Human
			race = "Human";
			isRaceSet = true;
			for (int i = 1; i <= 6; i++) {
				setRaceStatBonus(i, 1);
			}
			break;
		case 5: //Dragonborn
			race = "Dragonborn";
			isRaceSet = true;
			setRaceStatBonus(1, 2);
			setRaceStatBonus(6, 1);
			break;
		case 6: //Gnome
			race = "Gnome";
			isRaceSet = true;
			setRaceStatBonus(4, 2);
			break;
		case 7: //Half-Elf
			//Need to add option to select ability scores to improve
			race = "Half-Elf";
			isRaceSet = true;
			setRaceStatBonus(6, 2);
			//2 other scores get +1
			break;
		case 8: //Half-Orc
			race = "Half-Orc";
			isRaceSet = true;
			setRaceStatBonus(1, 2);
			setRaceStatBonus(3, 1);
			break;
		case 9: //Tiefling
			race = "Tiefling";
			isRaceSet = true;
			setRaceStatBonus(4, 1);
			setRaceStatBonus(6, 2);
		default:
			break;
	}
}

void Player::setClassStats(int pClass) {
	switch (pClass) {
		case 1: //Barbarian
			playerClass = "Barbarian";
			isClassSet = true;
			break;
		case 2: //Bard
			playerClass = "Bard";
			isClassSet = true;
			break;
		case 3: //Cleric
			playerClass = "Cleric";
			isClassSet = true;
			break;
		default:
			break;
	}
}

void Player::setRace(int pRace) {
	switch (pRace) {
		case 1: //Dwarf
			setRaceStats(1);
			break;
		case 2: //Elf
			setRaceStats(2);
			break;
		case 3: //Halfling
			setRaceStats(3);
			break;
		case 4: //Halfling
			setRaceStats(4);
			break;
		case 5: //Halfling
			setRaceStats(5);
			break;
		case 6: //Halfling
			setRaceStats(6);
			break;
		case 7: //Halfling
			setRaceStats(7);
			break;
		case 8: //Halfling
			setRaceStats(8);
			break;
		case 9: //Halfling
			setRaceStats(9);
			break;
		default:
			break;
	}
}

void Player::setClass(int pClass) {
	switch (pClass) {
		case 1: //Barbarian
			setClassStats(1);
			break;
		case 2: //Bard
			setClassStats(2);
			break;
		case 3: //Cleric
			setClassStats(3);
			break;
		default:
			break;
	}
}

string Player::getCharacter() {
	return "Race: " + race + "\nClass: " + playerClass;
}