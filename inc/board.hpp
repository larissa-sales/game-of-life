#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "cell.hpp"

using namespace std;

#define LINE 20
#define COL 70

typedef Cell(&MatrixCell)[LINE][COL];

class Board{
private:
	Cell field[LINE][COL];	
public:
	Board();
	~Board();

	MatrixCell getField();
	void setField(MatrixCell field);

	void printBoard();
};

#endif