/**********************************
* Class Data
* ----------------------
*  This class is an Object data containing
*  Address
*  Data
*  Size
*  RelTime
*  */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Data
{
	//methods
public:
	Data();

	//get functions
	int getNumOfWords() { return _numOfWords; } // Get the number of words
	string getAddressType() { return _addressType; } // get Address Type
	string getAddress(); // get Address
	int getSize();  // get Size
	int RelTime();  // get Time of previous command

					//Set Functions
	void setNumOfWords(string wordsInHex); // set  the number of words
	void setAddress(string address); //function to set address
	void setAddressType(string address); //function to set address
	void setSize(int size); //set size
	void setRelTime(int time); //set time or previous command


							   //Attributes
private:
	int _wordCount;
	int _numOfWords;
	string _addressType;
	string _address;
	int _size;
	int _relTime;
};