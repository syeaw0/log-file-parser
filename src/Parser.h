/*********************************************************
* CLASS Parser
* --------------------------------------------------------
* This class is the central class for this program. It's
* main jobs are to read a log file, initialize a data 
* object based on that file, and then create an output
* with the data provided by the data object in the
* specified format
**********************************************************/
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <istream>
#include <iterator>
#include <vector>
#include <cctype>
#include "Data.h"
using namespace std;

class Parser
{
	/*ATTRIBUTES*/
	private:
	string output;
	
	/*METHODS*/
	public:
	// Default Constructor
	Parser();

	// GENERAL METHODS
	/*************************************************
	* readFile
	* ------------------------------------------------
	* This method accepts a file name as a string. 
	* Then it will open the file, read in the data 
	* line by line, and will add the data to a Data 
	* object for each line and add the information a 
	* string object which will later be outputed
	**************************************************/
	void readFile(string filename);

	//private:
	/*************************************************
	* parseAddress
	* ------------------------------------------------
	* This method returns the address from a line of
	* the log
	**************************************************/
	string parseAddress(string line);

	/*************************************************
	* parseString
	* ------------------------------------------------
	* This method accepts a string and parses it into
	* words using whitespace as a delimiter
	**************************************************/
	vector<string> parseString(string line);
};
