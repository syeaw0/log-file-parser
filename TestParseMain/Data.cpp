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


/*string Data::getData()
{
	return _data;
}*/

int Data::getSize()
{
	return _size;
}

int Data::RelTime()
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

void Data::setSize(int size)
{
	_size = size;
}

void Data::setRelTime(int time)
{
	_relTime = time;
}