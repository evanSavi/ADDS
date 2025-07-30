#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
	protected:
		string name;
		char move;
	public:
		virtual char makeMove() = 0;
		string getName();
};

#endif