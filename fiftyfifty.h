#ifndef _FIFTY_FIFTY_H
#define _FIFTY_FIFTY_H

#include "prisonersdilemma.h"
#include <cstdlib>

class FiftyFifty : public Dilemma
{
	public:
		FiftyFifty() : Dilemma() { }
		~FiftyFifty() { }

	public:
		Choice SendMyMove()
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
};

#endif