//
//  SuperHero.cpp
//  verkefni aa
//
//  Created by Halldór Alvar Kjartansson on 27/11/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "SuperHero.hpp"

SuperHero::SuperHero(){
	_name = "";
	_age = 0;
	_power = 'n';
}

SuperHero::SuperHero(string name, int age, char power){
	_name = name;
	_age = age;
	_power = power;
}

string SuperHero::get_name(){
	return _name;
}
int SuperHero::get_age(){
	return _age;
}
char SuperHero::get_power(){
	return _power;
}
void SuperHero::set_name(string name){
	_name = name;
}
void SuperHero::set_age(int age){
	_age = age;
}
void SuperHero::set_power(char power){
	_power = power;
}

istream& operator >> (istream& in, SuperHero& hero){
	cout << "Please enter the name of the superhero: ";
	in >> hero._name;
	cout << "Please enter the age of the superhero: ";
	in >> hero._age;
	cout << "Please enter the superhero's powertype: ";
	hero.power_menu();
	in >> hero._power;
	return in;
}
ostream& operator << (ostream& out, SuperHero& hero){
	out << hero._name << " (" << hero._age << ") : " << hero.powerKind();
	return out;
}
string SuperHero::powerKind(){
	string power_type = "";
	if(_power == 'f'){
		power_type = "Flying";
	}
	else if (_power == 'g'){
		power_type = "Giant";
	}
	else if(_power == 'h'){
		power_type = "Hacker";
	}
	else if(_power == 'n'){
		power_type = "None";
	}
	else{
		power_type = "Weakling";
	}
	return power_type;
}

void SuperHero::power_menu(){
	cout << "Input f if the superpower is Flying" << endl;
	cout << "Input g if the superpower is Giant" << endl;
	cout << "Input h if the superpower is Hacker" << endl;
	cout << "Input n if the superpower is None" << endl;
	cout << "If anything else is chosen the superpower will be set to: Weakling" << endl;
}








