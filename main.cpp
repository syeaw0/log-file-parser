#include <iostream>
#include "Parser.h"
using namespace std;

int main()
{
	// VARIABLE DECLARATIONS
	Parser parser;
	string aString = "-330002 3---        2.655us             -11.749s    Start       A32nMBLT         4062E690 FFFCFFF3FFF70007    D64    Wr       Data ----- ----   1111111";

	cout << "Hello World!\n";
	parser.readFile("test_data.log");

	
	return 0;
}
