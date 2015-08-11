#ifndef _JESUS_H
#define _JESUS_H

#include "prisonersdilemma.h"

class Jesus : public Dilemma
{
	public:
		Jesus() : Dilemma() { }
		~Jesus() { }

	public:
		Choice SendMyMove()
		{
			Choice myMove = COOPERATE;
			return myMove;
		}
};

#endif