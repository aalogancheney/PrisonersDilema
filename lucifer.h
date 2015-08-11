#ifndef _LUCIFER_H
#define _LUCIFER_H

#include "prisonersdilemma.h"

class Lucifer : public Dilemma
{
	public:
		Lucifer() : Dilemma() { }
		~Lucifer() { }

	public:
		Choice SendMyMove()
		{
			Choice myMove = RETALIATE;
			return myMove;
		}
};

#endif