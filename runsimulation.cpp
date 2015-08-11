#define DEBUG 1

#include "../Headers/log.h"
#include "jesus.h"
#include "lucifer.h"
#include "titfortat.h"
#include "fiftyfifty.h"
#include <iostream>

const int NUMBER_OF_ITERATIONS = 200;

void RunSingleSimulation(Dilema *player1, Dilema *player2, int &player1Score, int &player2Score);

int main(int argc, char *argv[])
{
	Dilema *player1 = new Jesus();
	Dilema *player2 = new Jesus();
	int player1Score = 0;
	int player2Score = 0;

	for(int i = 0; i < NUMBER_OF_ITERATIONS; ++i)
	{
		RunSingleSimulation(player1, player2, player1Score, player2Score);
	}

	std::cout << "Player 1's score: " << player1Score << std::endl;
	std::cout << "Player 2's score: " << player2Score << std::endl;

	return 0;
}

void RunSingleSimulation(Dilema *player1, Dilema *player2, int &player1Score, int &player2Score)
{
	Choice player1Choice = player1->SendMyMove();
	Choice player2Choice = player2->SendMyMove();

	player1->RecordMyMove(player1Choice);
	player1->RecordTheirMove(player2Choice);
	player2->RecordMyMove(player2Choice);
	player2->RecordTheirMove(player1Choice);

	if(player1Choice == COOPERATE && player2Choice == COOPERATE)
	{
		LOG("Both players cooperated.");
		player1Score += 1;
		player2Score += 1;
	}
	else if(player1Choice == RETALIATE && player2Choice == COOPERATE)
	{
		LOG("Player 1 retaliated and player 2 cooperated.");
		player1Score += 0;
		player2Score += 3;
	}
	else if(player1Choice == COOPERATE && player2Choice == RETALIATE)
	{
		LOG("Player 1 cooperated and player 2 retaliated.");
		player1Score += 3;
		player2Score += 0;
	}
	else if(player1Choice == RETALIATE && player2Choice == RETALIATE)
	{
		LOG("Both players retaliated.");
		player1Score += 2;
		player2Score += 2;
	}
}