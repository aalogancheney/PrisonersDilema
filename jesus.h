#ifndef _JESUS_H
#define _JESUS_H

#include "prisonersdilemma.h"

class Jesus : public Dilemma
{
	public:
		Jesus();
		~Jesus();

	public:
		Choice SendMyMove();
};

#endif