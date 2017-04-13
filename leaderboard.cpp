#include <iostream>
#include <vector>
#include <cstdlib>
#include <cardplayer.h>
#include <string>
#include <algorithm>
#include <leaderboard.h>

bool Entry::operator<(const Entry& other) {
	return this->score < other.score;
}

void Leaderboard::setsize(int size) {
	this->entries.resize(size);
}

void Leaderboard::addentry(Entry entry) {
	this->entries.push_back(entry);
}

void Leaderboard::removeentry(int index) {
	this->entries.erase(this->entries.begin()+index);
}
Entry Leaderboard::getentry(int index) {
	return this->entries.at(index);
}
bool Leaderboard::playerInLeaderboard(Player candidate) {

	if(this->entries.size() == 0) return true;
	this->sort();
	return (candidate.plr_data.score > this->entries.back().score);
}
void Leaderboard::sort(){
		std::sort(this->entries.begin(),this->entries.end());

}
