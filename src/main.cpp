#include "board.hpp"
#include "block.hpp"
#include "blinker.hpp"

int main(){
	Board game;
	Block generator1;
	Blinker generator2;
	int x, y;

	cout << endl <<	 "Defina coordenada x e y para adicionar um block" << endl;
	cin >> x >> y;

	game.setField(generator1.setBlock(game.getField(), x, y));

	game.printBoard();

	cout << endl <<	 "Defina coordenada x e y para adicionar um blinker" << endl;
	cin >> x >> y;

	game.setField(generator2.setBlinker(game.getField(), x, y));

	game.printBoard();
}