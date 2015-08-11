// Base class for all strategies. Provides an interface for all strategies to 
// return their Choice and to access the history of choices of their opponent. 

#ifndef _PRISONERS_DILEMMA_H
#define _PRISONERS_DILEMMA_H

#include <vector>

enum Choice { COOPERATE, RETALIATE };

class Dilemma
{
	public:
		Dilemma();
		virtual ~Dilemma();

	public:
		virtual Choice SendMyMove() = 0;

	public:
		void RecordMyMove(Choice myMove);
		void RecordTheirMove(Choice theirMove);

	protected:
		std::vector<Choice> _myMoves;
		std::vector<Choice> _theirMoves;
};

Dilemma::Dilemma() { }

Dilemma::~Dilemma() { }

void Dilemma::RecordMyMove(Choice myMove)
{
	_myMoves.push_back(myMove);
}

void Dilemma::RecordTheirMove(Choice theirMove)
{
	_theirMoves.push_back(theirMove);
}

#endif