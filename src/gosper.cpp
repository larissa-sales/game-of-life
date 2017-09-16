#include "gosper.hpp"

MatrixCell Gosper::setGosper(MatrixCell field, int x, int y){
	setField(field);

	getField()[4][0].setAlive(true);
	getField()[5][0].setAlive(true);
	getField()[4][1].setAlive(true);
	getField()[5][1].setAlive(true);

	getField()[4][11].setAlive(true);
	getField()[5][11].setAlive(true);
	getField()[6][11].setAlive(true);
	getField()[3][12].setAlive(true);
	getField()[7][12].setAlive(true);
	getField()[2][13].setAlive(true);
	getField()[8][13].setAlive(true);
	getField()[2][14].setAlive(true);
	getField()[8][14].setAlive(true);
	getField()[5][15].setAlive(true);
	getField()[3][16].setAlive(true);
	getField()[7][16].setAlive(true);
	getField()[4][17].setAlive(true);
	getField()[5][17].setAlive(true);
	getField()[6][17].setAlive(true);
	getField()[5][18].setAlive(true);

	getField()[2][21].setAlive(true);
	getField()[3][21].setAlive(true);
	getField()[4][21].setAlive(true);
	getField()[2][22].setAlive(true);
	getField()[3][22].setAlive(true);
	getField()[4][22].setAlive(true);
	getField()[1][23].setAlive(true);
	getField()[5][23].setAlive(true);
	getField()[0][25].setAlive(true);
	getField()[1][25].setAlive(true);
	getField()[5][25].setAlive(true);
	getField()[6][25].setAlive(true);

	getField()[3][34].setAlive(true);
	getField()[4][34].setAlive(true);
	getField()[3][35].setAlive(true);
	getField()[4][35].setAlive(true);

	return getField();
}