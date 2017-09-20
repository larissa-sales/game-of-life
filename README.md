# Conway's Game of Life - C++

## The game

The Game of Life is a cellular automaton devised by the British mathematician John Horton Conway in 1970.

Its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves.

For further informations, go to: 

[LifeWiki](http://www.conwaylife.com/wiki/Main_Page)

[Conway's Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)

[Game of Life](https://bitstorm.org/gameoflife/)

## Instructions

#### Cloning the project

In the terminal, run the command:

`git clone https://gitlab.com/lariss-sales/ep1`

#### Running the software

Go to the project directory and run:

`make`

After the project is compiled, run:

`make run`

## Playing the game

To play Conway's Game of Life, the user must insert in the menu the desired number according to its functionality:

1. Insert a **Block**
2. Insert a **Blinker** 
3. Insert a **Glider**
4. Insert a **Gosper Glider Gun**
5. Start the game

Each time the option 1, 2 or 3 is chosen, the user will be asked to enter the coordinates in which he wants to put the figure. In option 4, the figure is inserted in a preset position.

When choosing option 5, the user must inform the number of generations that the cells should have applied the rules of life:

1. Any living cell with less than two living neighbors dies of solitude.
2. Any living cell with more than three living neighbors dies of overpopulation.
3. Any living cell with two or three living neighbors is still in the same state for the next generation.
4. Any dead cell with exactly three living neighbors becomes a living cell.

The game ends when the number of generations is over or when it is no longer possible to apply the rules of life.
