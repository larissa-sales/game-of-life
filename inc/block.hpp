#ifndef BLOCK_HPP
#define BLOCK_HPP

#include "board.hpp"

using namespace std;

class Block:public Board{
public:
	MatrixCell setBlock(MatrixCell field, int x, int y);
};

#endif