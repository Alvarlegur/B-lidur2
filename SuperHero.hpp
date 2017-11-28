//
//  SuperHero.hpp
//  verkefni aa
//
//  Created by Halldór Alvar Kjartansson on 27/11/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef SuperHero_hpp
#define SuperHero_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
class SuperHero {
public:
	SuperHero();
	SuperHero(string name, int age, char power);
	string get_name();
	int get_age();
	char get_power();
	void set_name(string name);
	void set_age(int age);
	void set_power(char power);
	friend istream& operator >> (istream& in, SuperHero& hero);
	friend ostream& operator << (ostream& out, SuperHero& hero);
	string powerKind();
	void power_menu();
private:
	string _name;
	int _age;
	char _power;
};
#endif /* SuperHero_hpp */
