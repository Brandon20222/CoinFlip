#ifndef GAME_H
#define GAME_H
#include "Coin.h"

class Game
{
private:
	Coin* coins;
	int numberOfCoins;
	double targetBalance;
	int totalScore;
	int rounds;
public:
	Game();
	Game(double target);
	~Game();
	
	void printFlipResults();
	void FlipCoins();
	void printScore();
	int getRounds();
	int getScore();
	void playGame();


};

#endif
