#ifndef CELULA_HPP
#define CELULA_HPP

#include <string>

using namespace std;

class Cell{

private:
	bool alive;

public:
	Cell();
	~Cell();

	bool getAlive();
	void setAlive(bool alive);
};

#endif
