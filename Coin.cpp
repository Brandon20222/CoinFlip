#include "Coin.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Coin::Coin() : centValue(1), isHeads(false){
}

Coin::Coin(int value) : centValue(value),isHeads(false) {
}

void Coin::flip() {
	isHeads = rand() % 2 == 0;
}
bool Coin::isItHeads()const {
	return isHeads;
}
string Coin::getSideUp()const {
	if (isHeads)
		return "Heads";
	else
		return "Tails";
}
int Coin::getCentValue()const {
	return centValue;
}