#include "Hex.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

void Hex::HexToBin(string hex){
	vector<char> binnum;
	char hexdec[100];
	string h = hex;
	//int wordcount = 0;
	strcpy(hexdec, h.c_str());
	vector<char> word(hexdec, hexdec + sizeof hexdec / sizeof hexdec[0]);
	//int n = word.size();
	//wordcount += n;
	i = word.begin();
	while (i != word.end())
		{
		switch (word[i])
		{
		case '0': 
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(0);
			break;
		case '1': 
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(1);
			break;
		case '2': 
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case '3': 
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(1);
			break;
		case '4': 
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(0);
			break;
		case '5': 
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			break;
		case '6': 
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case '7': 
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			break;
		case '8': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(0);
			break;
		case '9': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(0);
			binum.push_back(1);
			break;
		case 'A': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case 'B': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(1);
			break;
		case 'C': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(0);
			break;
		case 'D': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			break;
		case 'E': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case 'F': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			break;
		case 'a': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case 'b': 
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			binum.push_back(1);
			break;
		case 'c': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(0);
			break;
		case 'd': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			binum.push_back(1);
			break;
		case 'e': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(0);
			break;
		case 'f': 
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			binum.push_back(1);
			break;
		default: cout << "\nInvalid hexadecimal digit " << hexdec[i];
		}
			i++;
		}
}
void Hex::clearbin(){
	binum.clear();
}

