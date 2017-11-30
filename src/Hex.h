#include <iostream>
#include <string>
#include <vector>
//takes a string and stores, accept a string, convert to binary
/***************************************************************
Class Hex
This class will take a hexidecimal and convert it to a binary
number which will then be stored to be used in other class files.
***************************************************************/
using namespace std;

class Hex {

public:
	void HexToBin(string s);
private:
	vector<char> binum;
	vector<char> word;
	vector<int>::const_iterator i;
};
