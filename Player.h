#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
	protected:
		string name;
	public:
		virtual char makeMove() = 0;
		string getName();
		virtual ~Player() {};
};

#endif