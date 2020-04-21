#include <iostream>
#include <string>
using namespace std;

enum {
	BARBARIAN = 1,
	BARD,
	CLERIC,
	DRUID,
	FIGHTER,
	MONK,
	PALADIN,
	RANGER,
	ROGUE,
	SORCERER,
	WARLOCK,
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

class Barbarian : public CharClass {
public:
	      Barbarian();
	     ~Barbarian() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Bard : public CharClass {
public:
	      Bard();
	     ~Bard() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Cleric : public CharClass {
public:
	      Cleric();
	     ~Cleric() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Druid : public CharClass {
public:
	      Druid();
	     ~Druid() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Fighter : public CharClass {
public:
	      Fighter();
	     ~Fighter() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Monk : public CharClass {
public:
	      Monk();
	     ~Monk() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Paladin : public CharClass {
public:
	      Paladin();
	     ~Paladin() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Ranger : public CharClass {
public:
	      Ranger();
	     ~Ranger() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Rogue : public CharClass {
public:
	      Rogue();
	     ~Rogue() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Sorcerer : public CharClass {
public:
	      Sorcerer();
	     ~Sorcerer() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Warlock : public CharClass {
public:
	      Warlock();
	     ~Warlock() {}
	void  setSkillProfs();
	void  setToolProfs();
};

class Wizard : public CharClass {
public:
	      Wizard();
	     ~Wizard() {}
	void  setSkillProfs();
	void  setToolProfs();
};
