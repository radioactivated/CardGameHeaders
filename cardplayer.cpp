#include <cardplayer.h>

void Player::setname(std::string name) {
	this->plr_data.name = name;
}

std::string Player::name() {
	return (this->plr_data.name);
}

void Player::setscore(int score) {
	this->plr_data.score = score;
}

int Player::score(){
	return (this->plr_data.score);
}

bool Player::hasValidCard(Card topcard) {
	//std::cout << topcard.card_string() << std::endl;
	for (std::vector<Card>::iterator it = this->hand.cards.begin(); it != this->hand.cards.end(); ++it) {
    if(it->suit == topcard.suit || it->value == topcard.value || (it->value)+1 == 8) return true;
  }
	return false;
}

Card Player::draw(Deck* d) {
	// fixed as of 4/9/2017
	Card top = *(d->removeCard());
	this->hand.addCard(top);
	return top;
}
