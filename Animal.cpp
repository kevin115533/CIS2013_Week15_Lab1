#include "Animal.h"
using namespace std;

//Animal::Animal() {
//	setLegs(4);
//	isAlive(true);
//	species("Cat");
//}

Animal::Animal() : setLegs(4), isAlive(true), species("Cat") {
	//intentionally left empty
}

// both methods above are the same thing but in different format


Animal::Animal(int legs, bool alive, string spec) {
	int numOfLegs = legs;
	bool isAlive = alive;
	string species = spec;
}

Animal::~Animal() {
	//leaving empty
}

void Animal::setLegs(int legs) {
	numOfLegs = legs;
}

int Animal::getLegs() {
	return numOfLegs;
}

void Animal::setAlive(bool alive) {
	isAlive = alive;
}

bool Animal::getAlive() {
	return isAlive;
}

void Animal::setSpecies(string spec) {
	species = spec;
}

string Animal::getSpecies() {
	return species;
}

string Animal::describe() {
	return species << " with " << numOfLegs << " legs";

}