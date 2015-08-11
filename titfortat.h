#ifndef _TIT_FOR_TAT_H
#define _TIT_FOR_TAT_H

#include "prisonersDilemma.h"
#include <vector>
#include <cstdlib>

class TitForTat : public Dilemma
{
	public:
		TitForTat();
		~TitForTat();

	public:
		Choice SendMyMove();

	private:
		int _forgivenessPercentage;
};

#endif