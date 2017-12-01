#include "Hex.h"

long Hex::getDec() {
	return result;
}
void Hex::hextodec(string hex) {
	//string s = hex;
	//unsigned int x = stoul(s, nullptr, 16);
}
void Hex::binToDec() {
	int base = 0;
	result = 0;
	for (int i = (signed(binum.size()) - 1); i >= 0; i--)
	{
		result += (binum[i] - '0') * int(pow(2, base));
		base++;
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
		vector<char> word(hex.begin(), hex.end());
		vector<char>::iterator i;
		i = word.begin();
		while (i != word.end())
		{
			switch (*i) //error here 
			{
			case '0': //cout << "0000";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case '1': //cout << "0001";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case '2': //cout << "0010";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case '3': //cout << "0011";
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case '4': //cout << "0100";
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case '5': //cout << "0101";
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case '6': //cout << "0110";
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case '7': //cout << "0111";
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case '8': //cout << "1000";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case '9': //cout << "1001";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case 'A': //cout << "1010";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case 'B': //cout << "1011";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case 'C': //cout << "1100";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case 'D': //cout << "1101";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case 'E': //cout << "1110";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case 'F': //cout << "1111";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case 'a': //cout << "1010";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case 'b': //cout << "1011";
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				binum.push_back('1');
				break;
			case 'c': //cout << "1100";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('0');
				break;
			case 'd': //cout << "1101";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				binum.push_back('1');
				break;
			case 'e': //cout << "1110";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('0');
				break;
			case 'f': //cout << "1111";
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				binum.push_back('1');
				break;
			default: cout << "\nInvalid hexadecimal digit '" << *i << "'"; //error here
			}
			i++;
		}
		int c = sizeof word;
		//cout << c << endl;
		int current = c / 8;
		count += current;
	}
}
