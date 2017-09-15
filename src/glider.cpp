#include "glider.hpp"

MatrixCell Glider::setGlider(MatrixCell field, int x, int y){
	setField(field);

	getField()[x][y].setAlive(true);
	getField()[x+1][y+1].setAlive(true);
	getField()[x+2][y-1].setAlive(true);
	getField()[x+2][y].setAlive(true);
	getField()[x+2][y+1].setAlive(true);

	return getField();
}