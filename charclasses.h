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

class Barbarian : public CharClass {
private:
	      Barbarian();
	     ~Barbarian();
	void  setSkillProfs();
	void  setToolProfs();
};

class Bard : public CharClass {
private:
	      Bard();
	     ~Bard();
	void  setSkillProfs();
	void  setToolProfs();
};

class Cleric : public CharClass {
private:
	      Cleric();
	     ~Cleric();
	void  setSkillProfs();
	void  setToolProfs();
};

class Druid : public CharClass {
private:
	      Druid();
	     ~Druid();
	void  setSkillProfs();
	void  setToolProfs();
};

class Fighter : public CharClass {
private:
	      Fighter();
	     ~Fighter();
	void  setSkillProfs();
	void  setToolProfs();
};

class Monk : public CharClass {
private:
	      Monk();
	     ~Monk();
	void  setSkillProfs();
	void  setToolProfs();
};

class Paladin : public CharClass {
private:
	      Paladin();
	     ~Paladin();
	void  setSkillProfs();
	void  setToolProfs();
};

class Ranger : public CharClass {
private:
	      Ranger();
	     ~Ranger();
	void  setSkillProfs();
	void  setToolProfs();
};

class Rogue : public CharClass {
private:
	      Rogue();
	     ~Rogue();
	void  setSkillProfs();
	void  setToolProfs();
};

class Sorcerer : public CharClass {
private:
	      Sorcerer();
	     ~Sorcerer();
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
