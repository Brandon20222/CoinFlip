#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game() {
	
numberOfCoins = 3;
coins = new Coin[numberOfCoins];

Coin* tempCoins= new Coin[3]
{
	Coin(5), Coin(10),Coin(25) };

double targetBalance = 1.0;
int totalScore = 0;
int rounds = 0;

}
Game::Game(double target) : Game() {
	targetBalance = target;
}
Game::~Game() {
	delete[] coins;
	coins = nullptr;
}

void setCoin(Coin* moreCoin) {
	coins = moreCoin;
}


void Game::printFlipResults() {
	for (int i = 0; i < numberOfCoins; i++) {
		cout << coins[i].getSideUp() << endl;
		cout << " + value=" + to_string(coins[i].getCentValue()) << endl;
	}
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

}