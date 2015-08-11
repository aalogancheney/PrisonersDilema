#include "fiftyfifty.h"

FiftyFifty::FiftyFifty() : Dilemma() { }

FiftyFifty::~FiftyFifty() { }

Choice FiftyFifty::SendMyMove()
{
	Choice myChoice;
	if(rand() % 100 < 50)
	{
		myChoice = RETALIATE;
	}
	else
	{
		myChoice = COOPERATE;
	}
	return myChoice;
}