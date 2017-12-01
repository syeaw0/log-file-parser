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
}
void Data::setCycle(string cycle)
{
	_cycle = cycle;
}

void Data::setRelTime(int time)
{
	_relTime = time;
}

void Data::hexToBin(string hex)
{
	//HECTOR CODE HERE
}