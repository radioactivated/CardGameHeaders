#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <card.h>
#include <vector>
class Deck {
	Card cards[52];

	void generate();
	void shuffle();
	void output();
};

class Hand {
	std::vector<Card> cards;

	void init(int size);
	void addCard(Card c);
	void addCard(Card c, int loc);
	Card removeCard();
	Card removeCard(int loc);
	Card getCard(int loc);
};
