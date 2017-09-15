#ifndef BLINKER_HPP
#define BLINKER_HPP

#include "board.hpp"

using namespace std;

class Blinker:public Board{

public:
	MatrixCell setBlinker(MatrixCell field, int x, int y);
};

#endif