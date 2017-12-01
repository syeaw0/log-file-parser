//#include "Hex.h"
//each word in its own vector
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;
class Hex {

public:
	void HexToBin(string s);
	int getCount();
	void binToDec();
	int getDec();
	void hextodec(string hex);
	//void wordCount(string s);
private:
	vector<char> binum;
	vector<char> word;
	vector<char> hexdec;
	vector<int>::const_iterator i;
	int count;
	int result;
};
#include <iostream>
#include <sstream>

int Hex::getDec() {
	return result;
}
void Hex::hextodec(string hex) {
	string s = hex;
	unsigned int x = stoul(s, nullptr, 16);
}
void Hex::binToDec() {
	//int result = 0;
	int base = 1;

	for (unsigned int i = binum.size() - 1; i >= 0; --i)
	{
		result += binum[i] * base;
		base *= 2;
	}

}
int Hex::getCount() {
	return count;
}
/*void Hex::wordCount(string hex) {
	//char hexdec[100];
	//string h = hex;
	//strcpy_s(hexdec, h.c_str());
	vector<char> hexdec(begin(hex), end(hex));
	int i = sizeof hexdec;
	cout << i << endl;
	int current = i / 16;
	count += current;
}*/

void Hex::HexToBin(string hex) {
	{
		//vector<char> binnum;
		vector<char> word(begin(hex), end(hex));
		vector<char>::iterator i;
		i = word.begin();
		while (i != word.end())
		{
			switch (*i) //error here 
			{
			case '0': cout << "0000";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case '1': cout << "0001";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case '2': cout << "0010";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case '3': cout << "0011";
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
				break;
			case '4': cout << "0100";
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case '5': cout << "0101";
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				break;
			case '6': cout << "0110";
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case '7': cout << "0111";
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				break;
			case '8': cout << "1000";
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(0);
				break;
			case '9': cout << "1001";
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(1);
				break;
			case 'A': cout << "1010";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case 'B': cout << "1011";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case 'C': cout << "1100";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(0);
				break;
			case 'D': cout << "1101";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				break;
			case 'E': cout << "1110";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case 'F': cout << "1111";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				break;
			case 'a': cout << "1010";
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case 'b': cout << "1011";
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
				break;
			case 'c': cout << "1100";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(0);
				break;
			case 'd': cout << "1101";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				break;
			case 'e': cout << "1110";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case 'f': cout << "1111";
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				binum.push_back(1);
				break;
			default: cout << "\nInvalid hexadecimal digit '" << *i << "'"; //error here
			}
			i++;
		}
		int c = sizeof word;
		cout << c << endl;
		int current = c / 8;
		count += current;
	}
}



int main()
{
	// VARIABLE DECLARATIONS
	Hex hex;
	hex.HexToBin("A24BB42A");
	cout << endl;
	//hex.wordCount("A24BB42A");
	cout << endl;
	system("pause");
	cout << hex.getCount() << endl;
	system("pause");
	hex.binToDec();
	cout << hex.getDec() << endl;
	system("pause");
	return 0;
}
