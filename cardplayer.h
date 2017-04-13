#ifndef CARDPLAYER_H
#define CARDPLAYER_H
#include <cardcontainers.h>
#include <leaderboard.h>
class Entry;
class Player {
public:
	Hand hand;
	Entry plr_data;

	void setname(std::string name);
	std::string name();
	void setscore(int score);
	int score(); // may break some things??
	bool hasValidCard(Card topcard);
	Card draw(Deck* d); // returns true if 8 is
};

#endif
