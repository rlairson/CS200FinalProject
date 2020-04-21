#include <string>
#include <iostream>
using namespace std;

enum {
	HILLDWARF = 1,
	MOUNTAINDWARF,
	HIGHELF,
	WOODELF,
	DARKELF,
	LIGHTFOOT,
	STOUT,
	HUMAN,
	DRAGONBORN,
	FORESTGNOME,
	ROCKGNOME,
	HALFELF,
	HALFORC,
	TIEFLING
};

class Race {
protected:
	string playerName;  // Set by user
	string raceName;
	int    health;
	string age;         // Set by user
	string alignment;   // Set by user
	string size;
	int    speed;
	int    strBonus;
	int    wisBonus;
	int    conBonus;
	int    dexBonus;
	int    intBonus;
	int    chaBonus;
	string raceSkills;
	string raceProfs;
	string languages;
public:
	virtual void setAge()  = 0;
	void   setName();
	void   setHealth(int totalHealth);
	void   setAlignment();
	string getPlayerName();
	string getRaceName();
	int    getHealth();
	string getAge();
	string getAlignment();
	string getSize();
	int    getSpeed();
	int    getStrBonus();
	int    getWisBonus();
	int    getConBonus();
	int    getDexBonus();
	int    getIntBonus();
	int    getChaBonus();
	string getRaceSkills();
	string getRaceWeaponProfs();
	string getLanguages();
	void   printList(const char *list[], int n);
};

class HillDwarf : public Race {
public:
	      HillDwarf();
	     ~HillDwarf() {}
	void  setAge();
};

class MountainDwarf : public Race {
public:
	      MountainDwarf();
	     ~MountainDwarf() {}
	void  setAge();
};

class HighElf : public Race {
public:
	      HighElf();
	     ~HighElf() {}
	void  setAge();
};

class WoodElf : public Race {
public:
	      WoodElf();
	     ~WoodElf() {}
	void  setAge();
};

class DarkElf : public Race {
public:
	      DarkElf();
	     ~DarkElf() {}
	void  setAge();
};

class Lightfoot : public Race {
public:
	      Lightfoot();
	     ~Lightfoot() {}
	void  setAge();
};

class Stout : public Race {
public:
	      Stout();
	     ~Stout() {}
	void  setAge();
};

class Human : public Race {
public:
	      Human();
	     ~Human() {}
	void  setAge();
};

class DragonBorn : public Race {
public:
	        DragonBorn();
	       ~DragonBorn() {}
	void    setAge();
};

class ForestGnome : public Race {
public:
	      ForestGnome();
	     ~ForestGnome() {}
	void  setAge();
};

class RockGnome : public Race {
public:
	      RockGnome();
	     ~RockGnome() {}
	void  setAge();
};

class HalfElf : public Race {
public:
	      HalfElf();
	     ~HalfElf() {}
	void  setAge();
};

class HalfOrc : public Race {
public:
	      HalfOrc();
	     ~HalfOrc() {}
	void  setAge();
};

class Tiefling : public Race {
public:
	      Tiefling();
	     ~Tiefling() {}
	void  setAge();
};
