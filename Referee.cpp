#include "Referee.h"
#include <map>

Player * Referee::refGame(Player * player1, Player * player2) {
	// I initially used a long if else statement, but I figured that using a map of all the winning combinations would be much for efficient.
	map<char,char> notTies = {{'R', 'S'}, {'S', 'P'}, {'P', 'R'}};
	Player * winningPlayer = nullptr;
	char p1Move = player1->makeMove();
	char p2Move = player2->makeMove();
	if(p1Move == p2Move) {
		winningPlayer = nullptr;
	} else if(notTies[p1Move] == p2Move) {
		winningPlayer = player1;
	} else {
		winningPlayer = player2;
	}
	return winningPlayer;
}