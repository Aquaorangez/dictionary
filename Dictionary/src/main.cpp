//============================================================================
// Name        : main.cpp
// Author      : Mick Campittelli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Dictionary.h"

using namespace std;

int main() {
	Dictionary dictionary;

	string word;
	ifstream input("20k.txt");
	if (input.fail()) {
		cout << "FAIL" << endl;
		exit(1);
	}
	while (getline(input, word)) {
		dictionary.import(word);
	}

	dictionary.print();

	int prompt = 0;
	cout
			<< "Would you like to add, delete, or find a word in the dictionary? (y / n)"
			<< endl;
	cin >> word;

	if (word == "y") {
		while (prompt != 5) {
			cout << " (1) ADD\n (2) DELETE\n (3) FIND\n (4) PRINT\n (5) QUIT"
					<< endl;
			cin >> prompt;

			if (prompt == 1) {
				cout << "Input word to add." << endl;
				cin >> word;
				dictionary.add(word);
				continue;
			}

			else if (prompt == 2) {
				cout << "Input word to delete." << endl;
				cin >> word;
				dictionary.remove(word);
				continue;

			} else if (prompt == 3) {
				cout << "Input word to find." << endl;
				cin >> word;
				dictionary.check(word);
				continue;

			} else if (prompt == 4) {
				dictionary.print();
				continue;

			} else
				break;

		}
	}
	cout << "Quitting out..";
	exit(1);

}

