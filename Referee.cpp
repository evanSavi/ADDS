#include "Referee.h"
#include <map>

Player * Referee::refGame(Player * player1, Player * player2) {
	Player * winningPlayer;
	char p1Move = player1->makeMove();
	char p2Move = player2->makeMove();
	if(p1Move == p2Move) {
		winningPlayer = nullptr;
	} else if (p1Move == 'R' && p2Move == 'S'){
		winningPlayer = player1;
	} else if (p1Move == 'S' && p2Move == 'R') {
		winningPlayer = player2;
	} else if (p1Move == 'P' && p2Move == 'S') {
		winningPlayer = player2;
	} else if (p1Move == 'S' && p2Move == 'P') {
		winningPlayer = player1;
	} else if (p1Move == 'P' && p2Move == 'R') {
		winningPlayer = player1;
	} else if (p1Move == 'R' && p2Move == 'P') {
		winningPlayer = player2;
	}

	map<char,char> notTies = {{'R', 'S'}, {'P', 'S'}}
	return winningPlayer;
}