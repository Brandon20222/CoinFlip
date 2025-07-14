#ifndef COIN_H
#define COIN_H
#include <string>
#include <iostream>
using namespace std;

class Coin
{
private:
	bool isHeads;
	int const centValue;
public:
	Coin();
	Coin(int value);
	void flip();
	bool isItHeads()const;
	string getSideUp()const;
	int getCentValue()const;
	
};

#endif