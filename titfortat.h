#ifndef _TIT_FOR_TAT_H
#define _TIT_FOR_TAT_H

#include "prisonersDilemma.h"
#include <vector>
#include <cstdlib>

class TitForTat : public Dilemma
{
	public:
		TitForTat() : Dilemma() { _forgivenessPercentage = 1; }
		~TitForTat() { }

	public:
		Choice SendMyMove()
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

	private:
		int _forgivenessPercentage;
};

#endif