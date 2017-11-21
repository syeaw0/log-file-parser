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
using namespace std;
class Data
{
	//methods
	public:
	Data();

	//get functions
	string getAddress(); // get Address
	string getData(); // get Data
	int getSize();  // get Size
	int RelTime();  // get Time of previous command

	//Set Functions
	void setAddress(string address); //function to set address
	void setData(string data); // set data
	void setSize(int size); //set size
	void setRelTime(int time); //set time or previous command
	

	//Attributes
	private:
	string _address;
	string _data;
	int _size;
	int _relTime;
}
