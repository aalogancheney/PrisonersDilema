#ifndef _JESUS_H
#define _JESUS_H

#include "prisonersdilema.h"

class Jesus : public Dilema
{
	public:
		Jesus() : Dilema() { }
		~Jesus() { }

	public:
		Choice SendMyMove()
		{
			Choice myMove = COOPERATE;
			return myMove;
		}
};

#endif