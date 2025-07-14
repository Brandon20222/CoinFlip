#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game() {
	
	srand(time(0));
	numberOfCoins = 3;
	coins = new Coin[numberOfCoins];

	Coin* tempCoins= new Coin[3]
	{
	Coin(5), Coin(10),Coin(25) };

	coins = tempCoins;
	targetBalance = 1.0;
	totalScore = 0;
	rounds = 0;

}
Game::Game(double target) : Game() {
	targetBalance = target;
}
Game::~Game() {
	delete[] coins;
	coins = nullptr;
}

void setCoin(Coin* moreCoin) {
	Coin* coins = moreCoin;
}


void Game::printFlipResults() {
	double roundTotal = 0;
	for (int i = 0; i < numberOfCoins; i++) {
		cout << coins[i].getSideUp() << endl;
		cout << " + value = " + to_string(coins[i].getCentValue()) << endl;
		if(coins[i].isItHeads())
			roundTotal += coins[i].getCentValue() * .01;
	}
	totalScore += roundTotal;

	cout << "Tour total for this round is: " << roundTotal << endl;

	cout << "Your total for the game so far is: " << totalScore << endl;

}
void Game::FlipCoins() {
	for (int i = 0; i < numberOfCoins; i++) {
		coins[i].flip();
	}
}
void Game::printScore() {
	cout << "Score: " << to_string(getScore()) << endl;
}
int Game::getRounds() {
	return rounds;
}
int Game::getScore() {
	return totalScore;
}
void Game::playGame() {
	cout << "Welcome to the Coin Flipper!!!!" << endl;

	for (int i = 1; totalScore < targetBalance; i++) {
		FlipCoins();
		printFlipResults();
		rounds++;
	}
	cout << "It took you " << rounds << " To get to $" << targetBalance << endl;
}