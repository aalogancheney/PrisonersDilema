#include "titfortat.h"

TitForTat::TitForTat() : Dilemma() { _forgivenessPercentage = 1; }

TitForTat::~TitForTat() { }

Choice TitForTat::SendMyMove()
{
	Choice myMove;
	if(_myMoves.empty())
	{
		myMove = COOPERATE;
	}
	else
	{
		myMove = _theirMoves.back();
		if(myMove == RETALIATE && (rand() % 100 < _forgivenessPercentage))
		{
			myMove = COOPERATE;
		}
	}
	return myMove;
}