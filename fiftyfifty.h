#ifndef _FIFTY_FIFTY_H
#define _FIFTY_FIFTY_H

#include "prisonersdilemma.h"
#include <cstdlib>

class FiftyFifty : public Dilemma
{
	public:
		FiftyFifty();
		~FiftyFifty();

	public:
		Choice SendMyMove();
};

#endif