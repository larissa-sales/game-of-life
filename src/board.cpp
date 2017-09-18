#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board(){}

Board::~Board(){}

MatrixCell Board::getField(){
	return field;
}

void Board::setField(MatrixCell field){
	int l, c;

	for (l=0; l<LINE; l++){
		for (c=0; c<COL; c++){
			 this->field[l][c] = field[l][c]; 
		}
		cout << endl;
	}
}

void Board::printBoard(){
	int l, c;
	for(l=0; l<20; l++){
		cout << endl;
	}

	for (l=0; l<LINE; l++){
		for (c=0; c<COL; c++){
			if(field[l][c].getAlive()){
				cout << "o ";
			} 
			else{
				cout << "- ";
			}
		}
		cout << endl;
	}
}

void Board::checkNeighbors(){
	int l, c, counter;

	for (l=0; l<LINE; l++){
		for (c=0; c<COL; c++){
			counter = 0;

			if ((l-1)>=0 && (c-1)>=0){
				if(field[l-1][c-1].getAlive()){
					counter++;
				}
			} 
			if ((l-1)>=0 && (c)>=0){
				if(field[l-1][c].getAlive()){
					counter++;
				}
			}
			if ((l-1)>=0 && (c+1)<COL){
				if(field[l-1][c+1].getAlive()){
					counter++;
				}
			}
			if ((l)>=0 && (c-1)>=0){
				if(field[l][c-1].getAlive()){
					counter++;
				}
			}
			if ((l)>=0 && (c+1)<COL){
				if(field[l][c+1].getAlive()){
					counter++;
				}
			}
			if ((l+1)<LINE && (c-1)>=0){
				if(field[l+1][c-1].getAlive()){
					counter++;
				}
			}
			if ((l+1)<LINE && (c)>=0){
				if(field[l+1][c].getAlive()){
					counter++;
				}
			}
			if ((l+1)<LINE && (c+1)<COL){
				if(field[l+1][c+1].getAlive()){
					counter++;
				}
			}
			neighbors[l][c] = counter;
		}
	}
}

void Board::checkRules(){
	int l, c;

	checkNeighbors();

	for (l=0; l<LINE; l++){
		for (c=0; c<COL; c++){
			if (field[l][c].getAlive()==true){
				if (neighbors[l][c]<2){
					field[l][c].setAlive(false);
				} else if (neighbors[l][c]>3){
					field[l][c].setAlive(false);
				}
			} else{
				if (neighbors[l][c] == 3){
					field[l][c].setAlive(true);
				}
			}
		}
	}
}