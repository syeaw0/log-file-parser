#include "Hex.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

void Hex::HexToBin(string hex) {
	{
		char hexdec[100];
		string h = hex;
		strcpy_s(hexdec, h.c_str());
		vector<char> word(hexdec, hexdec + sizeof hexdec / sizeof hexdec[0]);
		vector<char>::iterator i;
		i = word.begin();
		while (i != word.end())
		{
			switch (*i) //error here
			{
			case '0': cout << "0000";
				binum.push_back((0));
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(0);
				break;
			case '1': cout << "0001";
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(1);
				break;
			case '2': cout << "0010";
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case '3': cout << "0011";
				binum.push_back(0);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
				break;
			case '4': cout << "0100";
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(0);
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
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(0);
				break;
			case 'B': cout << "1011";
				binum.push_back(1);
				binum.push_back(0);
				binum.push_back(1);
				binum.push_back(1);
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
			default: cout << "\nInvalid hexadecimal digit " << *i; //error here
			}
			i++;
		}
	}
}
