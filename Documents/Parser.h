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
using namespace std;

class Parser
{
	/*ATTRIBUTES*/
	private:
	
	/*METHODS*/
	public:
	// Default Constructor
	Parser();

	// GENERAL METHODS
	void readFile(string filename);
	void readFile(/*File Object*/);
};
