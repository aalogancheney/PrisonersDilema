#ifndef _FIFTY_FIFTY_H
#define _FIFTY_FIFTY_H

#include "prisonersdilema.h"
#include <cstdlib>

class FiftyFifty : public Dilema
{
	public:
		FiftyFifty() : Dilema() { }
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