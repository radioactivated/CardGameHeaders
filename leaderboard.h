//TODO: add include guard

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

struct Entry {
	std::string name;
	int score;
}

class Leaderboard() {
	std::vector<Entry> entries;

	void removeentry(int index);
	void setsize(int size);
	void addentry(Entry entry);
	void sort();
}