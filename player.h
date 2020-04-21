//player.h
#include<string>
#include <random>
#include <iostream>
#include<ctime>

using namespace std;

class Player {
	public:
		Player();
		
		void setPlayerStats();	//Get random stat scores
		void printPlayerStats();
		int rollDice(int rolls, int sides);	//Roll 3 six-sided dice
		void swapStat(int first, int second);

		int getStat(int num);	//Returns the stat based on number passed

		int getStr();
		int getDex();
		int getCon();
		int getInt();
		int getWis();
		int getCha();

		bool getIsHPSet();
		void setIsHPSet(bool b);

		bool getIsRaceSet();
		void setIsRaceSet(bool b);

		bool getIsClassSet();
		void setIsClassSet(bool b);

		bool getAreScoresRolled();
		void setAreScoresRolled(bool b);


	private:
		bool isClassSet = false;
		bool isRaceSet = false;
		bool isHPSet = false;
		bool areScoresRolled = false;

		//Stats
		int strength = 0;
		int dexterity = 0;
		int constitution = 0;
		int intelligence = 0;
		int wisdom = 0;
		int charisma = 0;
};
