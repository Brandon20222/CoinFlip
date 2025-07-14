#ifndef GAME_H
#define GAME_H
#include "Coin.h"
using namespace std;

class Game
{
private:
	Coin* coins;
	int numberOfCoins;
	double targetBalance;
	double totalScore;
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
	void setCoin(Coin* coin);


};

#endif
