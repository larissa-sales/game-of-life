#include "block.hpp"

MatrixCell Block::setBlock(MatrixCell field, int x, int y){
	setField(field);

	getField()[x][y].setAlive(true);
	getField()[x+1][y].setAlive(true);
	getField()[x][y+1].setAlive(true);
	getField()[x+1][y+1].setAlive(true);

	return getField();
}