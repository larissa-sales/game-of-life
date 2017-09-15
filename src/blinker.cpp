#include "blinker.hpp"

MatrixCell Blinker::setBlinker(MatrixCell field, int x, int y){
	setField(field);

	getField()[x][y].setAlive(true);
	getField()[x+1][y].setAlive(true);
	getField()[x-1][y].setAlive(true);

	return getField();
}