#include <iostream>
#include <string>
#include <card.h>
#include <algorithm>
/*
void CardArt::load() {
	auto list_aces = std::initializer_list<std::string>  ({
			"--------\n"
			"|A     |\n"
			"| (\\/) |\n"
			"|  \\/  |\n"
			"|     V|\n"
			"--------\n",
			"--------\n"
			"|A     |\n"
			"| (\\/) |\n"
			"|  \\/  |\n"
			"|     V|\n"
			"--------\n",
			"--------\n"
			"|A     |\n"
			"|  /\\  |\n"
			"| (__) |\n"
			"|  /\\ V|\n"
			"--------\n",
			"--------\n"
			"|A     |\n"
			"|  &   |\n"
			"| &|&  |\n"
			"|  |  V|\n"
			"--------\n"
	});
	std::copy(list_aces.begin(),list_aces.end(),this->aces);
	auto list_temps = std::initializer_list<std::string> ({
		"--------\n"
		"|2  x  |\n"
		"|      |\n"
		"|      |\n"
		"|  x  2|\n"
		"--------\n",
		"--------\n"
		"|3  x  |\n"
		"|      |\n"
		"|      |\n"
		"| x  x3|\n"
		"--------\n",
		"--------\n"
		"|4x  x |\n"
		"|      |\n"
		"|      |\n"
		"| x  x4|\n"
		"--------\n",
		"--------\n"
		"|5x  x |\n"
		"|   x  |\n"
		"|      |\n"
		"| x  x5|\n"
		"--------\n",
		"--------\n"
		"|6x  x |\n"
		"|   x  |\n"
		"|  x   |\n"
		"| x  x6|\n"
		"--------\n",
		"--------\n"
		"|7x  x |\n"
		"|    x |\n"
		"| x x  |\n"
		"| x  x7|\n"
		"--------\n",
		"--------\n"
		"|8x  x |\n"
		"| x  x |\n"
		"| x  x |\n"
		"| x  x8|\n"
		"--------\n",
		"--------\n"
		"|9x  x |\n"
		"| x xx |\n"
		"| x  x |\n"
		"| x  x9|\n"
		"--------\n",
		"--------\n"
		"|10x x |\n"
		"| x xx |\n"
		"| xx x |\n"
		"| x x10|\n"
		"--------\n",
		"--------\n"
		"|J \\-/ |\n"
		"|x /() |\n"
		"|  |/ x|\n"
		"|  |  J|\n"
		"--------\n",
		"--------\n"
		"|Q /-\\ |\n"
		"|x ()\\ |\n"
		"| /--\\x|\n"
		"|  |  Q|\n"
		"--------\n",
		"--------\n"
		"|K \\-/ |\n"
		"|x /()-|\n"
		"| /--\\x|\n"
		"| /||\\K|\n"
		"--------\n"
	});
	std::copy(list_temps.begin(),list_temps.end(),this->templates);
};

// std::string CardArt::get_art(Card c){
// 	if(c.value+1 == 1) {
// 		return this->aces[c.suit];
// 	}else{
// 		char32_t suitsymbols[4] = {'\u2665','\u2666','\u2660','\u2663'};
// 		std::string cardtemplate = this->templates[c.value];
// 		std::replace(cardtemplate.begin(),cardtemplate.end(),U'x',suitsymbols[c.suit]);
// 		return cardtemplate;
// 	}
// }
*/
std::string Card::card_string(){
	std::string suits[4] = {"Hearts","Diamonds","Spades","Clubs"};
	std::string values[13] = {"Ace","Two","Three","Four","Five",
		"Six","Seven","Eight","Nine",
		"Ten","Jack","Queen","King"};

	return (values[this->value] + " of " + suits[this->suit]);
}
