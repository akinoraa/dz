#include <iostream>

using namespace std;

class Cat { //робимо котика
	//властивості (поля класу,змінні классу)
	double tail_length = 0.5;//м
	int ears_count = 2;
	string fur_color = "white";
	string nick = "Snizhok";
	string eyes_color = "blue";
	int energyLevel;//1-100
	int nPows;
	int hungerLevel;//1-100
	bool muteness;

	//...

public:
	//поведінка (методи класу, функції класу)
	void makeNoise();
	void walk();
	void eat();
	void printCat();
};
