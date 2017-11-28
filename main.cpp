//
//  main.cpp
//  verkefni aa
//
//  Created by Halldór Alvar Kjartansson on 27/11/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "SuperHero.hpp"
using namespace std;

int main(){
	SuperHero hero1;
	ofstream outHero ("HeroFile.txt");
	ifstream inHero ("HeroFile.txt");
	if(inHero.is_open()){
		while (!inHero.eof()){
			
		}
		
	}
	else{
		cout << "The file is not open" << endl;
	}
	
	return 0;
}
