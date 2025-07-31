#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {

	Player * player1 = new Human();
	Player * player2 = new Computer();
	Referee * ref = new Referee();
	Player * winner = nullptr;

	winner = ref->refGame(player1, player2);

	if(winner == nullptr) {
		cout << "It's a Tie." << endl;
	} else {
		cout << winner->getName() << " Wins." << endl;
	}

	delete player1;
	delete player2;
	delete ref;

	return 0;
}