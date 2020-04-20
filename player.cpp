#include"player.h"

Player::Player() {
	for (int i = 1; i <= 6; i++) {
		setRaceStatBonus(i, 0);
	}
	//setRace(1);	//This way there is no class until the user selects it
	//setClass(1);
	srand(time(NULL));
}

Player::Player(int pRace, int pSubRace, int pClass) {
	for (int i = 1; i <= 6; i++) {
		setRaceStatBonus(i, 0);
	}
	setRace(pRace, pSubRace);
	setClass(pClass);
	isRaceSet = true;
	isClassSet = true;
	srand(time(NULL));
}

void Player::setPlayerLevel(int level) {
	playerLevel = level;
	setProficiencyBonus(playerLevel);
}

int Player::getPlayerLevel() {
	return playerLevel;
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
	cout << "\n\tStrength: " << strength + raceStr << " (" << (strength + raceStr - 10) / 2 << ")"
		<< "\n\tDexterity: " << dexterity + raceDex << " (" << (dexterity + raceDex - 10) / 2 << ")"
		<< "\n\tConstitution: " << constitution + raceCon << " (" << (constitution + raceCon - 10) / 2 << ")"
		<< "\n\tIntelligence: " << intelligence + raceInt << " (" << (intelligence + raceInt - 10) / 2 << ")"
		<< "\n\tWisdom: " << wisdom + raceWis << " (" << (wisdom + raceWis - 10) / 2 << ")"
		<< "\n\tCharisma: " << charisma + raceCha << " (" << (charisma + raceCha - 10) / 2 << ")"
		<< endl;
}

void Player::printHitpoints() {
	cout << "Hitpoints: " << hitpoints << endl;
}

int Player::rollDice(int rolls, int sides) {	//(# of dice rolled, # of sides on each dice)
	int total = 0;
	for (int i = 0; i < rolls; i++) {
		total += rand() % sides + 1;
	}
	//cout << "Roll: " << total << endl;
	return total;
}

void Player::setPlayerStats() {
	strength = rollDice(3, 6);
	dexterity = rollDice(3, 6);
	constitution = rollDice(3, 6);
	intelligence = rollDice(3, 6);
	wisdom = rollDice(3, 6);
	charisma = rollDice(3, 6);
}

void Player::setRaceStats(int pRace) {
	int score1, score2 = 0;

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
			race = "Half-Elf";
			isRaceSet = true;
			setRaceStatBonus(6, 2);
			//2 other scores get +1
			system("cls");
			cout << "Half-Elf Ability Score Improvement"
				<< "\n1. Strength"
				<< "\n2. Dexterity"
				<< "\n3. Constitution"
				<< "\n4. Intelligence"
				<< "\n5. Wisdom"
				<< "\n6. Charisma"
				<< "\n\nSelect two scores to improve by one: ";
			cin >> score1 >> score2;
			setRaceStatBonus(score1, 1);
			setRaceStatBonus(score2, 1);
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

void Player::setHitDice(int sides) {
	hitDice = sides;
}

int Player::getHitDice() {
	return hitDice;
}

int Player::getHitpoints() {
	return hitpoints;
}

void Player::setHitpoints(int hp) {
	hitpoints = hitpoints + hp;
}

void Player::setClassStats(int pClass) {
	switch (pClass) {
		case 1: //Barbarian
			playerClass = "Barbarian";
			isClassSet = true;
			setHitDice(12);
			//d12
			break;
		case 2: //Bard
			playerClass = "Bard";
			isClassSet = true;
			setHitDice(8);
			break;
		case 3: //Cleric
			playerClass = "Cleric";
			isClassSet = true;
			setHitDice(8);
			break;
		case 4: //Druid
			playerClass = "Druid";
			isClassSet = true;
			setHitDice(8);
			break;
		case 5: //Fighter
			playerClass = "Fighter";
			isClassSet = true;
			setHitDice(10);
			//d10
			break;
		case 6: //Monk
			playerClass = "Monk";
			isClassSet = true;
			setHitDice(8);
			break;
		case 7: //Paladin
			playerClass = "Paladin";
			isClassSet = true;
			setHitDice(10);
			//d10
			break;
		case 8: //Ranger
			playerClass = "Ranger";
			isClassSet = true;
			setHitDice(10);
			//d10
			break;
		case 9: //Rogue
			playerClass = "Rogue";
			isClassSet = true;
			setHitDice(8);
			break;
		case 10: //Sorcerer
			playerClass = "Sorcerer";
			isClassSet = true;
			setHitDice(6);
			//d6
			break;
		case 11: //Warlock
			playerClass = "Warlock";
			isClassSet = true;
			setHitDice(8);
			//d8
			break;
		case 12: //Wizard
			playerClass = "Wizard";
			isClassSet = true;
			setHitDice(6);
			//d6
			break;
		default:
			break;
	}
}

void Player::setRace(int pRace, int pSubRace) {	//Needs second parameter for subrace
	switch (pRace) {
		case 1: //Dwarf
			setRaceStats(1);
			if (pSubRace == 1) {
				//Hill Dwarf = 1
					//Wisdom +1
				setRaceStatBonus(5, 1);
				race = "Hill Dwarf";
			}
			else if (pSubRace == 2) {
				//Mountain Dwarf = 2
					//Strength +2
				setRaceStatBonus(1, 2);
				race = "Mountain Dwarf";
			}
			else {}	//Error
			break;
		case 2: //Elf
			setRaceStats(2);
			if (pSubRace == 1) {
				//High Elf = 1
					//Intelligence +1
				setRaceStatBonus(4, 1);
				race = "High Elf";
			}
			else if (pSubRace == 2) {
				//Wood Elf = 2
					//Wisdom +1
				setRaceStatBonus(5, 1);
				race = "Wood Elf";
			}
			else if (pSubRace == 3) {
				//Dark Elf = 3
					//Charisma +1
				setRaceStatBonus(6, 1);
				race = "Dark Elf";
			}
			else{}	//Error
			break;
		case 3: //Halfling
			setRaceStats(3);
			if (pSubRace == 1) {
				//Lightfoot = 1
					//Charisma +1
				setRaceStatBonus(6, 1);
				race = "Lightfoot Halfling";
			}
			else if (pSubRace == 2) {
				//Stout
					//Constitution +1
				setRaceStatBonus(3, 1);
				race = "Stout Halfling";
			}else{}	//Error
			break;
		case 4: //Human
			setRaceStats(4);
			break;
		case 5: //Dragonborn
			setRaceStats(5);
			//Draconic Ancestry
			break;
		case 6: //Gnome
			setRaceStats(6);
			if (pSubRace == 1) {
				//Forest Gnome = 1
					//Dexterity +1
				setRaceStatBonus(2, 1);
				race = "Forest Gnome";
			}
			else if (pSubRace == 2) {
				//Rock Gnome = 1
					//Constitution +1
				setRaceStatBonus(3, 1);
				race = "Rock Gnome";
			}else{}	//Error
			break;
		case 7: //Half-Elf
			setRaceStats(7);
			break;
		case 8: //Half-Orce
			setRaceStats(8);
			break;
		case 9: //Tiefling
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
		case 4: //Druid
			setClassStats(4);
			break;
		case 5: //Fighter
			setClassStats(5);
			break;
		case 6: //Monk
			setClassStats(6);
			break;
		case 7: //Paladin
			setClassStats(7);
			break;
		case 8: //Ranger
			setClassStats(8);
			break;
		case 9: //Rogue
			setClassStats(9);
			break;
		case 10: //Sorcerer
			setClassStats(10);
			break;
		case 11: //Warlock
			setClassStats(11);
			break;
		case 12: //Wizard
			setClassStats(12);
			break;
		default:
			break;
	}
}

string Player::getCharacter() {
	return "Race: " + race + "\nClass: " + playerClass;
}

int Player::getStr() {
	return strength + raceStr;
}

int Player::getDex() {
	return dexterity + raceDex;
}

int Player::getCon() {
	return constitution + raceCon;
}

int Player::getInt() {
	return intelligence + raceInt;
}

int Player::getWis() {
	return wisdom + raceWis;
}

int Player::getCha() {
	return charisma + raceCha;
}

bool Player::getIsHPSet() {
	return isHPSet;
}

void Player::setIsHPSet(bool b) {
	isHPSet = b;
}

bool Player::getAreScoresRolled() {
	return areScoresRolled;
}

void Player::setAreScoresRolled(bool b) {
	areScoresRolled = b;
}

void Player::setProficiencyBonus(int level) {
	switch (level) {
		case 1:
		case 2:
		case 3:
		case 4:
			proficiencyBonus = 2;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			proficiencyBonus = 3;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			proficiencyBonus = 4;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			proficiencyBonus = 5;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
			proficiencyBonus = 6;
			break;
		default:
			break;
	}
}

int Player::getProficiencyBonus() {
	return proficiencyBonus;
}