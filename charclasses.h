#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum {
	BARBARIAN = 1,
	BARD,
	CLERIC,
	DRUID,
	FIGHTER,
	MONK,
	PALIDIN,
	RANGER,
	ROGUE,
	SORCERER,
	WIZARD
};

class CharClass {
protected:
	int    hitDie;
	int    startingHP;
	string className;
	string armorProfs;
	string weaponProfs;
	string toolProfs;
	string skillProfs;
	string savingThrows;
	
public:
	void    setHP(const int constitutionScore);
	virtual void setSkillProfs() = 0;
	virtual void setToolProfs()  = 0;
	int     getHitDie();
	int     getHP();
	string  getClassName();
	string  getArmorProfs();
	string  getWeaponProfs();
	string  getToolProfs();
	string  getSkillProfs();
	string  getSavingThrows();
	void    printList(const char *skills[], int n);
};

class Warlock : public CharClass {
public:
	      Warlock();
	     ~Warlock() {}
	void  setSkillProfs();
	void  setToolProfs();
};
