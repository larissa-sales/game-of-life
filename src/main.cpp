#include "board.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"
#include "gosper.hpp"

void sleep(int ms){
	int limit = ms+clock();
	while(clock() < limit);
}

int main(){
	Board game;
	Block generator1;
	Blinker generator2;
	Glider generator3;
	Gosper generator4;
	int x, y, option, generations, aux;
	cout << endl;
	game.printBoard();

	do{
		cout << endl <<	 "Choose one option to continue:" << endl;
		cout << endl <<	 "\t1. Insert a Block" << endl;
		cout << endl <<	 "\t2. Insert a Blinker" << endl;
		cout << endl <<	 "\t3. Insert a Glider" << endl;
		cout << endl <<	 "\t4. Insert a Gosper Glider Gun" << endl;
		cout << endl <<	 "\t5. Begin the game" << endl;

		cin >> option;

		switch(option){
			case 1:
				cout << endl <<	"Define a coordinate to set a Block" << endl;
				cin >> x >> y;

				game.setField(generator1.setBlock(game.getField(), x, y));

				game.printBoard();

				break;

			case 2:
				cout << endl << "Define a coordinate to set a Blinker" << endl;
				cin >> x >> y;

				game.setField(generator2.setBlinker(game.getField(), x, y));

				game.printBoard();

				break;

			case 3:
				cout << endl << "Define a coordinate to set a Glider" << endl;
				cin >> x >> y;

				game.setField(generator3.setGlider(game.getField(), x, y));

				game.printBoard();

				break;

			case 4:
				game.setField(generator4.setGosper(game.getField(), x, y));

				game.printBoard();

				break;
		}
	} while(option != 5);

	cout << "Generations: ";
	cin >> generations;

	for(aux=0; aux<generations; aux++){
		game.checkRules();
		game.printBoard();
		sleep(125000);
	}
	
}