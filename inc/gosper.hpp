#ifndef GOSPER_HPP
#define GOSPER_HPP

#include "board.hpp"

using namespace std;

class Gosper:public Board{
public:
	MatrixCell setGosper(MatrixCell field, int x, int y);
};

#endif