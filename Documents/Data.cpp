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

}

string Data::getAddress()
{
	return _address;
}

string Data::getData()
{
	return _data;
}

int Data::getSize()
{
	return _size;
}

int Data::RelTime()
{
	return _relTime;
}

void Data::setAddress(string address)
{
	_address = address;
}

void Data::setData(string data)
{
	_data = data;
}

void Data::setSize(int size)
{
	_size = size;
}

void Data::setRelTime(int time)
{
	_relTime = time;
}

