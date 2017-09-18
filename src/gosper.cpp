#include "gosper.hpp"

MatrixCell Gosper::setGosper(MatrixCell field, int x, int y){
	setField(field);

	getField()[5][2].setAlive(true);
	getField()[6][2].setAlive(true);
	getField()[5][3].setAlive(true);
	getField()[6][3].setAlive(true);

	getField()[5][12].setAlive(true);
	getField()[6][12].setAlive(true);
	getField()[7][12].setAlive(true);
	getField()[4][13].setAlive(true);
	getField()[8][13].setAlive(true);
	getField()[3][14].setAlive(true);
	getField()[9][14].setAlive(true);
	getField()[3][15].setAlive(true);
	getField()[9][15].setAlive(true);
	getField()[6][16].setAlive(true);
	getField()[4][17].setAlive(true);
	getField()[8][17].setAlive(true);
	getField()[5][18].setAlive(true);
	getField()[6][18].setAlive(true);
	getField()[7][18].setAlive(true);
	getField()[6][19].setAlive(true);

	getField()[3][22].setAlive(true);
	getField()[4][22].setAlive(true);
	getField()[5][22].setAlive(true);
	getField()[3][23].setAlive(true);
	getField()[4][23].setAlive(true);
	getField()[5][23].setAlive(true);
	getField()[2][24].setAlive(true);
	getField()[6][24].setAlive(true);
	getField()[1][26].setAlive(true);
	getField()[2][26].setAlive(true);
	getField()[6][26].setAlive(true);
	getField()[7][26].setAlive(true);

	getField()[4][36].setAlive(true);
	getField()[5][36].setAlive(true);
	getField()[4][37].setAlive(true);
	getField()[5][37].setAlive(true);

	return getField();
}