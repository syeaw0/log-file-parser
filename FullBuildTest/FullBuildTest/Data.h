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
	string getData(); //get data
	string getCycle();  // get Size
	int getRelTime();  // get Time of previous command
	char getBinary(); //Gets Binary of the hex data

							   //Set Functions
	void setNumOfWords(string wordsInHex); // set  the number of words
	void setAddress(string address); //function to set address
	void setAddressType(string address); //function to set address
	void setCycle(string cycle); //set size
	void setRelTime(int time); //set time or previous command
	void setData(string data); //set Hex data
	//void setBinary();

	//do something functions
	void hexToBin(string hex); //converts hex to binary
	void printBinary(vector<char> binary); //test prints the binary conversion of the data
	void clearbin(); //clears the vector bin
	void extractBits(int wordCount); //extract bits of the vector binum
							   //Attributes
private:
	int _wordCount;
	int _numOfWords;
	string _addressType;
	string _address;
	string _data;
	string _cycle;
	int _relTime;
	
	//hexToBin Vectors
	vector<char> binum;
	vector<char> word;
	vector<int>::const_iterator i;
};