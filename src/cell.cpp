#include "cell.hpp"
#include <iostream>

using namespace std;

Cell::Cell(){
	alive = 0;
}

Cell::~Cell(){}

bool Cell::getAlive(){
	return alive;
}

void Cell::setAlive(bool alive){
	this->alive = alive;
}
