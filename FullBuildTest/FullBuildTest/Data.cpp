/*************************************
* Data.cpp
* ------------------
* Contains class functions for
* getAddress
* getData
* getSize
* getRelTime
* setAddress
* setData
* setSize
* setRelTime
*/
#include "Data.h"
#include <iostream>
#include <string>

Data::Data()
{
	_wordCount = 0;
}

string Data::getAddress()
{
	return _address;
}


string Data::getData()
{
	return _data;
}

string Data::getCycle()
{
	return _cycle;
}

int Data::getRelTime()
{
	return _relTime;
}

char Data::getBinary()
{
	return binum.at(3);
}
void Data::setNumOfWords(string wordsInHex)
{
	// TODO!
}

void Data::setAddress(string address)
{
	_address = address;
}

void Data::setAddressType(string address)
{
	if (address == "40000810")
	{
		_addressType = "StoD";
	}
	else if (address == "40000C18")
	{
		_addressType = "DtoS";
	}
	else
	{
		_addressType = "Unknown";
	}
	_address = address;
}

void Data::setData(string data)
{
	_data = data;
	hexToBin(data);
}
void Data::setCycle(string cycle)
{
	_cycle = cycle;
}

void Data::setRelTime(int time)
{
	_relTime = time;
}

void Data::hexToBin(string hex) //Converts the Data string into Binary
{
	vector<char> word(begin(hex), end(hex));
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
		default: cout << "\nInvalid hexadecimal digit " << *i; //error here
		}
		i++;
	}
	printBinary(binum);
	//extractBits(0);
	clearbin();
}

void Data::printBinary(vector<char> binary) //print the binary vector
{
	for (int x = 0; x != binary.size(); ++x)
	{
		//cout << binary[x] << "- subscripting" << endl;
		cout << binary.at(x);
	}
	cout << endl;
}

void Data::extractBits(int wordCount)
{
	string word;
	switch (wordCount) 
	{
		case 0: 
		{  
			word = binum[1] + binum[2];
			cout << word << '\n';
			break;
		} // scope of 'x' ends here
	default: std::cout << "default\n"; // no error
		break;
	}
}
void Data::clearbin() 
{
	binum.clear();
}