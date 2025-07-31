#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
	// The name is listed as protected, so it cannot be modified in unusual ways.
	protected:
		string name;
	public:
		// makeMove() is a pure virtual function as this class is a scaffold for its children.
		virtual char makeMove() = 0;
		// The getName() function is standard as it operates identically in its child classes.
		string getName();
		// Virtual destructor is used to ensure all children are destroyed properly upon ending the program.
		virtual ~Player() {};
};

#endif