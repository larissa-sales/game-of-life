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

	for (l=0; l<LINE; l++){
		for (c=0; c<COL; c++){
			if(field[l][c].getAlive()){
				cout << "o";
			} 
			else{
				cout << ".";
			}
		}
		cout << endl;
	}
}
