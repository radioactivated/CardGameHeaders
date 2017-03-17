#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

class Card {
	int suit;
	int value;
	
	std::string card_string();
};

#endif
