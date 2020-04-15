//player.h
#include<string>
#include <random>
#include <iostream>
#include<ctime>

using namespace std;

class Player {
	public:
		Player();
		Player(int pRace, int pClass);

		void setRace(int pRace);
		void setClass(int pClass);
		void setClassStats(int pClass);
		void setRaceStats(int pRace);
		void setPlayerStats();	//Get random stat scores
		int rollDice();	//Roll 3 six-sided dice
		void swapStat(int first, int second);

		void setRaceStatBonus(int stat, int amount);	//Set racial stat bonus

		void printPlayerStats();
		int getStat(int num);	//Returns the stat based on number passed
		string getCharacter();
		bool getIsClassSet();	//Returns isClassSet
		bool getIsRaceSet();	//Returns isRaceSet
	private:
		bool isClassSet = false;
		bool isRaceSet = false;

		string race = "";
		string playerClass = "";

		//Stats
		int strength = 0;
		int dexterity = 0;
		int constitution = 0;
		int intelligence = 0;
		int wisdom = 0;
		int charisma = 0;

		//Race stat bonus
		int raceStr = 0;
		int raceDex = 0;
		int raceCon = 0;
		int raceInt = 0;
		int raceWis = 0;
		int raceCha = 0;
};
