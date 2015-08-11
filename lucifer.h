#ifndef _LUCIFER_H
#define _LUCIFER_H

#include "prisonersdilemma.h"

class Lucifer : public Dilemma
{
	public:
		Lucifer();
		~Lucifer();

	public:
		Choice SendMyMove();
};

#endif