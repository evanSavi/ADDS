#include "Referee.h"
#include <map>

Player * Referee::refGame(Player * player1, Player * player2) {
	map<char,char> notTies = {{'R', 'S'}, {'S', 'P'}, {'P', 'R'}};
	Player * winningPlayer;
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