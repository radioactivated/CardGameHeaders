#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
class Card {
public:
	int suit;
	int value;

	std::string card_string();
	//std::string get_art(); // gets the ascii art for a card
};
// class CardArt {
// public:
// 	std::string aces[4];
// 	std::string templates[12];
// 	void load();
// 	std::string get_art(Card c);
// };



#endif
