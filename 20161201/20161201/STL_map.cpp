#pragma once
#include <iostream>
#include <string>
#include <map>
#include <list>
using namespace std;

class Word {
private:
	string word;
public:
	Word(string word) {
		this->word = word;
	}
	string getWord() {
		return this->word;
	}
};


/*void main() {

map<string, int> m;

m["seoul"] = 100;
m["daegu"] = 120;
m["busan"] = 200;

cout << "Train to Seoul = " << m["seoul"] << "$" << endl;
cout << "Train to Daegu = " << m["daegu"] << "$" << endl;
cout << "Train to Busan = " << m["busan"] << "$" << endl;
}
*/