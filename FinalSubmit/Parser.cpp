#include "Parser.h"
using namespace std;
// Default Constructor
Parser::Parser()
{
	output = "";
}

Parser::Parser(Data Object)
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
void Parser::readFile(string filename, Data Object)
{
	int count = 0;
	ifstream infile(filename.c_str());
	string line;
	while (getline(infile, line))
	{
		count += 1;
		istringstream iss(line);
		string garbage; //garbage
		string time;
		int timeNum;
		string address;
		string data;
		string cycle; //read write
		if (!(iss >> garbage >> garbage >> time >> garbage >> garbage >> garbage >> address >> data >> garbage >> cycle))
		{
			cout << "ERROR in reading stream" << endl;
			break;
		} // error

		// See if the entered address is a command and print it and search for data
		else if (address == "40000810" || address == "40000C18" /*|| address == "40000818" || address == "40000C14"*/)
		{	
			//timeNum = stoi(time);
			Object.setRelTime(timeNum);
			Object.setAddress(address);
			Object.setAddressType(address);
			Object.setData(data);
			Object.setCycle(cycle);
			printDataInfo(Object, count);

			bool command = true;
			while(getline(infile, line) && command)
			{
				count++;
				istringstream stream(line);
				if((stream >> garbage >> garbage >> time >> garbage >> garbage >> garbage >> address >> data >> garbage >> cycle))			
				{
					if(address == "40000810" || address == "40000C18")
					{
			
						//timeNum = stoi(time);
						Object.setRelTime(timeNum);
						Object.setAddress(address);
						Object.setAddressType(address);
						Object.setData(data);
						Object.setCycle(cycle);
						printDataInfo(Object, count);
						command = false;
					}
					else if(Object.getAddressType() == "StoD")
					{
						
					}
					else if(Object.getAddressType() == "DtoS")
					{
						
					}
				}
			}
		}
		//cout << "Time: " << time << " Address: " << address << " Data: " << data << " " << cycle << endl;
		// process pair (a,b)
	}
	infile.close();
	/*
	// VARIABLE DECLARATIONS
	bool collectData = false; // This tracks whether or not data is being collected
	// Open the file
	ifstream input(filename.c_str());

	// Read file line by line
	//stod = false;
	//dtos = false;
	string line;
	//getline(input, line);
	for (int i = 0; i < 1000; i++) //while(!input.eof()) ---- to prevent crash during test for(int i = 0; i < 1000; i++)
	{
	getline(input, line);
	// If the memory address is a command, begin
	// collecting relevant data
	string address = parseAddress(line);

	if (address == "40000810" || address == "40000C18")
	{
	collectData = true;
	string data = parseData(line);
	Object.setAddress(address);
	Object.setAddressType(address);
	Object.setData(data);
	printDataInfo(Object);
	}
	}

	// Close the file
	input.close();
	*/
}

string Parser::getAddress()
{
	return _address;
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

string Parser::parseData(string line)
{
	vector<string> data = parseString(line);
	return data.at(7);
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
	for (int i = 0; i < signed(line.length()); i++)
	{
		// If there is whitespace add the word string to vector
		// or else continue adding characters to the word.
		if (!isspace(line[i]))
		{
			string character(1, line[i]);
			word.append(character);
		}
		else
		{
			// Make sure the word string is not empty
			if (signed(word.length()) != 0)
			{
				words.push_back(word);
				word.clear();
			}
		}
	}

	return words;
}

void Parser::printDataInfo(Data Object, int count)
{
	cout << "Line " << count << ": ";
	if(Object.getCycle() == "Wr")
	{
		cout << "Write ";
	}
	else if(Object.getCycle() == "Rd")
	{
		cout << "Read ";
	}
	else
	{
		cout << "ERROR in getCycle ";
	}
	if(Object.getAddressType() == "StoD")
	{
		cout << "S-to-D ";
	}
	else if (Object.getAddressType() == "DtoS")
	{
		cout << "D-to-S ";
	}
	else
	{
		cout << "Error in address type";
	}
	cout << "command: ";

	Hex hex;
	hex.HexToBin(Object.getData());
	hex.binToDec();
	cout << hex.getDec();

	cout << " words" << endl;

	/*cout << count << " Time:  " << Object.getRelTime() << " Address Type:  " << Object.getAddressType() << " Address:  " << Object.getAddress() << " Data:  " << Object.getData() << "  " << Object.getCycle() << endl;
	*/	
	cout << endl;
}
