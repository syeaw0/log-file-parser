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
	cout << binToDecimal(binum) << endl;
	extractBits(5);
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

void Data::extractBits(int wordCount) //extracts certain bits depending on which word we are one
{
	string word;
	switch (wordCount) 
	{
		case 0: 
		{  
			word = binum[1];
			word += binum[2];
			if (word == "00")
			{
				cout << "Rec_Ctrl = no recording" << endl;
			}
			else if (word == "10")
			{
				cout << "Rec_Ctrl = no processing" << endl;
			}
			else if (word == "11")
			{
				cout << "Rec_Ctrl = processing & recording" << endl;
			}
			break;
		} 
		case 1:
		{
			word = binum[0];
			word += binum[1];
			word += binum[2];
			cout << word << endl;
			if (word == "100")
			{
				cout << "Cmd_Type = Type A" << endl;
			}
			else if (word == "101")
			{
				cout << "Cmd_Type = Type B" << endl;
			}
			else if (word == "110")
			{
				cout << "Cmd_Type = Type C" << endl;
			}
			break;
		}
		case 4:
		{
			word = binum[15];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Rec_Raw = disable" << endl;
			}
			else if (word == "1")
			{
				cout << "Rec_Raw = enable" << endl;
			}
			break;
		}
		case 5: //NEED CONVERTER FROM BINARY TO DEC
		{
			word = binum[9];
			for (int i = 9; i <= 15; i++)
			{
				word += binum[i];
			}
			cout << "Cmd_ID = " << binToDecimal(word) << endl;
			break;
		}
		case 10: //MAY NEED A CONVERTER FOR BINARY TO DEC
		{
			word = binum[0];
			for (int i = 1; i <= 4; i++)
			{
				word += binum[i];
			}
			cout << "Num_Responses = " << binToDecimal(word) << endl;
			break;
		}
		case 15:
		{
			word = binum[13];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Reset_Enable = disable" << endl;
			}
			else if (word == "1")
			{
				cout << "Reset_Enable = enable" << endl;
			}
			break;
		}
		case 22:
		{
			word = binum[12];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Direction = Right" << endl;
			}
			else if (word == "1")
			{
				cout << "Direction = Left" << endl;
			}
			break;
		}
		case 32: //NEED CONVERTER
		{
			word = binum[1];
			for (int i = 2; i <= 15; i++)
			{
				word += binum[i];
			}
			cout << "Num_Samples = " << binToDecimal(word) << endl;
			break;
		}
		case 37:
		{
			word = binum[0];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Parity = even" << endl;
			}
			else if (word == "1")
			{
				cout << "Parity = odd" << endl;
			}
			break;
		}
		case 38:
		{
			word = binum[1];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Test = disable" << endl;
			}
			else if (word == "1")
			{
				cout << "Test = enable" << endl;
			}
			break;
		}
		case 40:
		{
			word = binum[8];
			cout << word << endl;
			if (word == "0")
			{
				cout << "Ctrl_Enable = disable" << endl;
			}
			else if (word == "1")
			{
				cout << "Ctrl_Enable - enable" << endl;
			}
			break;
		}
		case 41: //NEED CONVERTER
		{
			word = binum[1];
			for (int i = 2; i <= 7; i++)
			{
				word += binum[i];
			}
			cout << "Code = " << binToDecimal(word) << endl;
			break;
		}
		default: std::cout << "default\n"; // no error
		break;
	}
}

int Data::binToDecimal(vector<char> binary) //converts binary to decimal returns int
{
	string binString;
	binString = binary[0];
	for (int i = 1; i != binary.size(); ++i)
	{
		//cout << binary[x] << "- subscripting" << endl;
		binString += binary[i];
	}
	int bin, dec = 0, rem, base = 1;
	int value = atoi(binString.c_str());
	bin = value;
	while (value > 0)
	{
		rem = value % 10;
		dec = dec + rem * base;
		base = base * 2;
		value = value / 10;
	}
	
	//cout << "The decimal equivalent of " << bin << " : " << dec << endl;
	return dec;
}
int Data::binToDecimal(string word) //converts binary to decimal returns int
{

	int bin, dec = 0, rem, base = 1;
	int value = atoi(word.c_str());
	bin = value;
	while (value > 0)
	{
		rem = value % 10;
		dec = dec + rem * base;
		base = base * 2;
		value = value / 10;
	}

	//cout << "The decimal equivalent of " << bin << " : " << dec << endl;
	return dec;
}

void Data::clearbin() 
{
	binum.clear();
}