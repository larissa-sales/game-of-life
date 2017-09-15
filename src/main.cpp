#include "board.hpp"
#include "block.hpp"

int main(){
	Board game;
	Block generator;
	int x, y;

	game.printBoard();

	cout << endl <<	 "Defina coordenada x e y" << endl;
	cin >> x >> y;

	game.setField(generator.setBlock(game.getField(), x, y));

	game.printBoard();
}