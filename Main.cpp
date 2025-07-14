#include <iostream>
#include "Coin.h"
#include <ctime>
using namespace std;


void driver();

int main() {
	srand(time(0));
	driver();
}

void driver() {
	Coin coin;
	int heads = 0, tails = 0;
	
	for (int i = 0; i < 20; i++) {
		coin.flip();
		if (coin.isItHeads()) {
			heads += 1;
		}
		else
			tails += 1;
	}
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;

}
