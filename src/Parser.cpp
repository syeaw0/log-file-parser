#include "Parser.h"

// Default Constructor
Parser::Parser()
{
	output = "";
}

/*************************************************
* readFile
* ------------------------------------------------
* This method accepts a file name as a string. 
* Then it will open the file, read in the data 
* line by line, and will add the data to a Data 
* object for each line and add the information a 
* string object which will later be outputed
**************************************************/
void Parser::readFile(string filename)
{
	// VARIABLE DECLARATIONS
	bool collectData = false; // This tracks whether or not data is being collected
	// Open the file
	ifstream input (filename.c_str());		

	// Read file line by line
	stod = false;
	dtos = false;
	string line;
	getline(input, line);
	while(!input.eof())
	{
		getline(input, line);
		// If the memory address is a command, begin
		// collecting relevant data
		string address = parseAddress(line);
		if(address == "40000810" || address == "40000C18")
		{
			collectData = true;
		}
	}

	// Close the file
	input.close();
}

/*************************************************
* parseAddress
* ------------------------------------------------
* This method returns the address from a line of
* the log
**************************************************/
string Parser::parseAddress(string line)
{
	vector<string> data = parseString(line);

	return data.at(6);
}

/*************************************************
* parseString
* ------------------------------------------------
* This method accepts a string and parses it into
* words using whitespace as a delimiter
**************************************************/
vector<string> Parser::parseString(string line)
{
	// VARIABLE DECLARATIONS
	vector<string> words;

	// Loop through string
	string word;
	for(int i = 0; i < signed(line.length()); i++)
	{
		// If there is whitespace add the word string to vector
		// or else continue adding characters to the word.
		if(!isspace(line[i]))
		{
			string character(1, line[i]);
			word.append(character);
		}
		else
		{
			// Make sure the word string is not empty
			if(signed(word.length()) != 0)
			{
				words.push_back(word);
				word.clear();
			}
		}
	}

	return words;
}
