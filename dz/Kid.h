#include <iostream>
#include "Cat.h"

using namespace std;
class Kid {
private:
	//властивості (поля класу,змінні классу)
	string name;
	string hairColor;
	string eyesColor;
	int age;
	int goodMood;
	int energyLvl;
	int haveHat;

public:
	void setName(string name);
	string getName()const;
	void setHairColor(string hairColor);

	string getHairColor()const;
	void setEyesColor(string eyesColor);
	string getEyesColor()const;
	void setAge(int age);
	int getAge() const;
	void setGoodMood(int goodMood);
	int getChargeLevel() const;
	void setEnergyLvl(int energyLvl);
	int getEnergyLvl() const;
	void setHaveHat(int haveHat);
	int getHaveHat() const;
	//поведінка (методи класу, функції класу)
	
	void fun();
	void game(Cat who);
	void cry();
	void run();
	void learn();
	void wear();
	void printKid();
};

