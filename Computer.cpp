#include "Computer.h"

Computer::Computer() {
	name = "Computer";
}

// The computer only has one move: "Rock".
char Computer::makeMove() {
	return 'R';
}