//TODO: add include guard
#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cardplayer.h>
#include <string>
class Player; // forward declaration fixes circular dependencies
class Entry {
public:
	std::string name;
	int score;
	bool operator<(const Entry& other);
};

class Leaderboard {
public:
	std::vector<Entry> entries;

	void removeentry(int index);
	void setsize(int size);
	Entry getentry(int index);
	void addentry(Entry entry);
	bool playerInLeaderboard(Player candidate);
	void sort();
};

#endif
