/*
 * Dictionary.h
 *
 *  Created on: Nov 20, 2017
 *      Author: ?
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <map>

namespace std {

class Dictionary {
	map<string, int> dictionary;

public:

	Dictionary();
	virtual ~Dictionary();
	void print();
	void import(string word);
	void add(string word);
	void remove(string word);
	void check(string word);
};

}
#endif /* DICTIONARY_H_ */
