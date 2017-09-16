#ifndef GLIDER_HPP
#define GLIDER_HPP

#include "board.hpp"

using namespace std;

class Glider:public Board{
public:
	MatrixCell setGlider(MatrixCell field, int x, int y);
};

#endif