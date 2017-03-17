#include <iostream>
#include <string>
#include <card.h>
std::string Card::card_string(){
	std::string suits[4] = {"Hearts","Diamonds","Spades","Clubs"};
	std::string values[13] = {"Ace","Two","Three","Four","Five",
		"Six","Seven","Eight","Nine",
		"Ten","Jack","Queen","King"};

	return values[this->value] + " of " + suits[this->suit];
}
