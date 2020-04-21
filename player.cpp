#include"player.h"

Player::Player() {
	srand(time(NULL));
}

void Player::printPlayerStats() {
	cout << "\n\tStrength: " << strength << " (" << (strength  - 10) / 2 << ")"
		<< "\n\tDexterity: " << dexterity  << " (" << (dexterity  - 10) / 2 << ")"
		<< "\n\tConstitution: " << constitution  << " (" << (constitution  - 10) / 2 << ")"
		<< "\n\tIntelligence: " << intelligence  << " (" << (intelligence  - 10) / 2 << ")"
		<< "\n\tWisdom: " << wisdom  << " (" << (wisdom  - 10) / 2 << ")"
		<< "\n\tCharisma: " << charisma  << " (" << (charisma  - 10) / 2 << ")"
		<< endl;
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

int Player::rollDice(int rolls, int sides) {	//(# of dice rolled, # of sides on each dice)
	int total = 0;
	for (int i = 0; i < rolls; i++) {
		total += rand() % sides + 1;
	}
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



int Player::getStr() {
	return strength;
}

int Player::getDex() {
	return dexterity;
}

int Player::getCon() {
	return constitution;
}

int Player::getInt() {
	return intelligence;
}

int Player::getWis() {
	return wisdom;
}

int Player::getCha() {
	return charisma;
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

bool Player::getIsRaceSet() {
	return isRaceSet;
}
void Player::setIsRaceSet(bool b) {
	isRaceSet = b;
}

bool Player::getIsClassSet() {
	return isClassSet;
}
void Player::setIsClassSet(bool b) {
	isClassSet = b;
}