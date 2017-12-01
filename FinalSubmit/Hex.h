//#include "Hex.h"
//each word in its own vector
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;
class Hex {

public:
	void HexToBin(string s);
	int getCount();
	void binToDec();
	long getDec();
	void hextodec(string hex);
	//void wordCount(string s);
private:
	vector<char> binum;
	vector<char> word;
	vector<char> hexdec;
	vector<int>::const_iterator i;
	int count;
	long result;
};


