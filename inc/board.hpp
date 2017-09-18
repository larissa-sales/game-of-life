#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "cell.hpp"

using namespace std;

#define LINE 20
#define COL 38

typedef Cell(&MatrixCell)[LINE][COL];

class Board{
private:
	Cell field[LINE][COL];	
	int neighbors[LINE][COL];

public:
	Board();
	~Board();

	MatrixCell getField();
	void setField(MatrixCell field);

	void printBoard();

	void checkNeighbors();

	void checkRules();
};

#endif