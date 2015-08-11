#ifndef _PRISONERS_DILEMA_H
#define _PRISONERS_DILEMA_H

#include <vector>

enum Choice { COOPERATE, RETALIATE };

class Dilema
{
	public:
		Dilema();
		~Dilema();

	public:
		virtual Choice SendMyMove() = 0;

	public:
		void RecordMyMove(Choice myMove);
		void RecordTheirMove(Choice theirMove);

	protected:
		std::vector<Choice> _myMoves;
		std::vector<Choice> _theirMoves;
};

Dilema::Dilema()
{

}

Dilema::~Dilema()
{

}

void Dilema::RecordMyMove(Choice myMove)
{
	_myMoves.push_back(myMove);
}

void Dilema::RecordTheirMove(Choice theirMove)
{
	_theirMoves.push_back(theirMove);
}

#endif