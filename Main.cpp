#include <string>
#include <iostream>
#include "Animal.h"

int main() {
	string species;
	int legs;
	bool isAlive;
	char alive;
	
	Animal cat;

	cout << "You making some animals..." << endl;
	cout << "What species animal do you want to make first? ";
	cin >> species;

	cout << "How many legs does your animal have? ";
	cin >> legs;

	cout << "Is your animal alive? Y/N";
	cin >> isAlive;
	
	if (alive == 'y' || alive == 'Y'){
		isAlive = true;
	}
	else if (alive == 'n' || alive == 'N') {
		isAlive = false;
	}
	else {
		cout << "That is not an option" << endl;
	}

	Animal user(legs, isAlive, species);

	cout << "Also, I am going to make a you a cat" << endl;
	return 0;
}
