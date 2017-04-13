#ifndef CARDCONTAINERS_H
#define CARDCONTAINERS_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <card.h>
#include <vector>

class Container {
public:
	std::vector<Card> cards;
	void init(int size);
	void addCard(Card c, int loc);
	void addCard(Card c);
	void output();
	Card &getCard(int loc);
	Card *removeCard();
	Card *removeCard(int loc);
	int size();

};

class Deck : public Container {
public:
	void generate(int numdecks);
	void shuffle();
	void output();
};

class Hand : public Container {
public:

};

class Pile : public Container {
public:
	Card &topCard();
};

#endif
