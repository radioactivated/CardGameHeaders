#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cardcontainers.h>

void Container::init(int size) {
	this->cards.resize(size);
}
void Container::addCard(Card c, int loc){
	this->cards.insert(this->cards.begin()+loc,c);
}
void Container::addCard(Card c){
	this->cards.push_back(c);
}
void Container::output() {
	for(std::vector<Card>::iterator it = this->cards.begin(); it != this->cards.end(); ++it) {
		std::cout << it-(this->cards.begin()) +1 << ". " << it->card_string() << std::endl;
	}
}
Card& Container::getCard(int loc) {
	return this->cards.at(loc);
}
Card* Container::removeCard() {
	Card *last = &(this->cards.back());
	int size = this->cards.size();
	this->cards.pop_back();
	//this->cards.resize(size-1);
	return last;
}
Card* Container::removeCard(int loc) {
	Card *at = &(this->cards.at(loc));
	int size = this->cards.size();
	this->cards.erase(this->cards.begin()+loc);
	//this->cards.resize(size-1);
	return at;
}
int Container::size() {
	return this->cards.size();
}

void Deck::generate(int numdecks) {
	this->cards.resize(0);
	for (int ndecks = 0; ndecks < numdecks; ++ndecks) {
		for (int suit = 0; suit < 4; suit++) {
			for (int val = 0; val < 13; val++) {
				Card c;
				c.suit = suit;
				c.value = val;
				//std::cout << c.card_string();
				this->cards.push_back(c);
			}
		}
	}
}
void Deck::shuffle() {
	//srand((unsigned)time(NULL));
	for (long i = 0; i < 100000; i++) {
		int r1 = rand() % this->cards.size();
		int r2 = rand() % this->cards.size();
		Card temp = this-> cards[r1];
		this->cards[r1]=this->cards[r2];
		this->cards[r2]=temp;
	}
}

Card& Pile::topCard() {
	return this->cards.back();
}
