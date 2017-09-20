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

	game.printBoard();
	cout << endl << "WELCOME TO THE CONWAY'S GAME OF LIFE!!!" << endl;

	do{
		cout << endl << "Choose one option to continue:" << endl;
		cout << endl << "\t1. Insert a Block" << endl;
		cout << endl << "\t2. Insert a Blinker" << endl;
		cout << endl << "\t3. Insert a Glider" << endl;
		cout << endl << "\t4. Insert a Gosper Glider Gun" << endl;
		cout << endl << "\t5. Start the game" << endl;
		cout << endl << "\t=> ";

		cin >> option;

		switch(option){
			case 1:
				cout << endl <<	"\tDefine a coordinate to set a Block: ";
				cin >> x;
				cout <<"\t\t\t\t\t    ";
				cin >> y;

				game.setField(generator1.setBlock(game.getField(), x, y));

				game.printBoard();

				break;

			case 2:
				cout << endl << "\tDefine a coordinate to set a Blinker: ";
				cin >> x;
				cout <<"\t\t\t\t\t      ";
				cin >> y;

				game.setField(generator2.setBlinker(game.getField(), x, y));

				game.printBoard();

				break;

			case 3:
				cout << endl << "\tDefine a coordinate to set a Glider: ";
				cin >> x;
				cout <<"\t\t\t\t\t     ";
				cin >> y;

				game.setField(generator3.setGlider(game.getField(), x, y));

				game.printBoard();

				break;

			case 4:
				game.setField(generator4.setGosper(game.getField(), x, y));

				game.printBoard();

				break;
		}
	} while(option != 5);

	cout << endl << "\tNumber of generations: ";
	cin >> generations;

	for(aux=0; aux<generations; aux++){
		game.checkRules();
		game.printBoard();
		sleep(125000);
	}	
}