#include "board.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

int main(){
	Board game;
	Block generator1;
	Blinker generator2;
	Glider generator3;
	int x, y, option;

	do{
		cout << endl <<	 "Choose one option to continue:" << endl << endl;
		cout << endl <<	 "1. Insert a Block" << endl;
		cout << endl <<	 "2. Insert a Blinker" << endl;
		cout << endl <<	 "3. Insert a Glider" << endl;
		cout << endl <<	 "4. Insert a Gosper Glider Gun" << endl;
		cout << endl <<	 "5. Begin the game" << endl;

		cin >> option;

		switch(option){
			case 1:
				cout << endl <<	"Define a coordinate to set a Block" << endl;
				cin >> x >> y;

				game.setField(generator1.setBlock(game.getField(), x, y));

				break;

			case 2:
				cout << endl << "Define a coordinate to set a Blinker" << endl;
				cin >> x >> y;

				game.setField(generator2.setBlinker(game.getField(), x, y));

				break;

			case 3:
				cout << endl << "Define a coordinate to set a Glider" << endl;
				cin >> x >> y;

				game.setField(generator3.setGlider(game.getField(), x, y));

				break;

			case 5:		
				game.printBoard();

				break;
		}
	} while(option != 5);
}