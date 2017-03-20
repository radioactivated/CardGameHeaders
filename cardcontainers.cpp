#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cardcontainers.h>

void Deck::generate() {
	for (int suit = 0; suit < 4; suit++) {
		for (int val = 0; val < 13; val++) {
			Card c;
			c.suit = suit;
			c.value = val;
			this->cards[val+suit*13] = card;
		}
	}
}

void Deck::shuffle() {
	//srand((unsigned)time(NULL));
	for (int i = 0; i < 100000; i++) {
		int r1 = rand() % 52;
		int r2 = rand() % 52;
		Card temp = this-> cards[r1];
		this->cards[r1]=this->cards[r2];
		this->cards[r2]=temp;
	}
}

void Deck::output() {
	for (int i = 0; i < 52; i++) {
		std::cout << this->cards[i].card_string() << '\n';
	}
}