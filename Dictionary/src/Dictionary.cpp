/*
 * Dictionary.cpp
 *
 *  Created on: Nov 20, 2017
 *      Author: ?
 */

#include "Dictionary.h"
using namespace std;

namespace std {

Dictionary::Dictionary() {
}

Dictionary::~Dictionary() {
	// TODO Auto-generated destructor stub
}

void Dictionary::print() {
	for (map<string, int>::iterator it = dictionary.begin();
			it != dictionary.end(); it++) {
		cout << it->first << endl;
	}
}

void Dictionary::import(string word) {
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	dictionary[word];
}


void Dictionary::add(string word) {
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	if (dictionary.find(word) == dictionary.end()) {
		dictionary[word];
		cout << word << " added to dictionary." << endl;
	} else
		cout << word << " is already in the dictionary" << endl;
}

void Dictionary::remove(string word) {
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	if (dictionary.find(word) != dictionary.end()) {
		dictionary.erase(word);
		cout << word << " removed from dictionary." << endl;
	} else
		cout << word << " does not exist!" << endl;
}


void Dictionary::check(string word) {
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	if (dictionary.find(word) == dictionary.end()) {
		cout << word << " not found." << endl;
	} else
		cout << word << " is in the dictionary." << endl;
}

}
