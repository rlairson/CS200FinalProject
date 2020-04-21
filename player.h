//player.h
#include<string>
#include <random>
#include <iostream>
#include<ctime>

using namespace std;

class Player {
	public:
		Player();
		Player(int pRace, int pSubRace, int pClass);

		//void setRace(int pRace, int pSubRace);
		//void setClass(int pClass);
		//void setClassStats(int pClass);
		//void setRaceStats(int pRace);
		
		void setPlayerStats();	//Get random stat scores
		int rollDice(int rolls, int sides);	//Roll 3 six-sided dice
		void swapStat(int first, int second);

		//void setRaceStatBonus(int stat, int amount);	//Set racial stat bonus

		void printPlayerStats();
		int getStat(int num);	//Returns the stat based on number passed
		
		//string getCharacter();
		
		//bool getIsClassSet();	//Returns isClassSet
		//bool getIsRaceSet();	//Returns isRaceSet
		//void setHitDice(int sides);	//Set class hit dice
		//void rollHP(int rolls, int sides);
		//int getHitDice();
		//int getHitpoints();
		//void setHitpoints(int hp);
		//void printHitpoints();

		void setPlayerLevel(int level);
		int getPlayerLevel();

		int getStr();
		int getDex();
		int getCon();
		int getInt();
		int getWis();
		int getCha();

		//bool getIsHPSet();
		//void setIsHPSet(bool b);

		bool getAreScoresRolled();
		void setAreScoresRolled(bool b);

		void setProficiencyBonus(int level);
		int getProficiencyBonus();


	private:
		//bool isClassSet = false;
		//bool isRaceSet = false;
		//bool isHPSet = false;
		bool areScoresRolled = false;

		int playerLevel = 0;
		int proficiencyBonus = 0;

		//string race = "";
		//string playerClass = "";

		//Class
		//int hitDice = 0;
		//int hitpoints = 0;

		//Stats
		int strength = 0;
		int dexterity = 0;
		int constitution = 0;
		int intelligence = 0;
		int wisdom = 0;
		int charisma = 0;

		//Race stat bonus
		//int raceStr = 0;
		//int raceDex = 0;
		//int raceCon = 0;
		//int raceInt = 0;
		//int raceWis = 0;
		//int raceCha = 0;
};
