#include "board.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

int main(){
	Board game;
	Block generator1;
	Blinker generator2;
	Glider generator3;
	int x, y;

	cout << endl <<	 "Defina coordenada x e y para adicionar um Block" << endl;
	cin >> x >> y;

	game.setField(generator1.setBlock(game.getField(), x, y));

	cout << endl <<	 "Defina coordenada x e y para adicionar um Blinker" << endl;
	cin >> x >> y;

	game.setField(generator2.setBlinker(game.getField(), x, y));

	cout << endl <<	 "Defina coordenada x e y para adicionar um Glider" << endl;
	cin >> x >> y;

	game.setField(generator3.setGlider(game.getField(), x, y));

	game.printBoard();
}