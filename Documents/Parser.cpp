#include "Parser.h"

// Default Constructor
Parser::Parser()
{
	output = "";
}

void Parser::readFile(string filename)
{
	// Open the file
	ifstream input (filename);
	input.open();

	// Close the file
	input.close();
}
