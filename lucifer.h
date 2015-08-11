#ifndef _LUCIFER_H
#define _LUCIFER_H

#include "prisonersdilema.h"

class Lucifer : public Dilema
{
	public:
		Lucifer() : Dilema() { }
		~Lucifer() { }

	public:
		Choice SendMyMove()
		{
			Choice myMove = RETALIATE;
			return myMove;
		}
};

#endif