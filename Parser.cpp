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
	// Open the file
	ifstream input (filename.c_str());

	// Read file line by line
	string line;
	getline(input, line);
	while(!input.eof())
	{
		string line;
		getline(input, line);
		cout << line << endl;
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
