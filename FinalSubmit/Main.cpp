#include <iostream>
#include <cstdlib>
#include "Parser.h"
using namespace std;
int main()
{
	Parser DoSomething;
	Data Object;
	DoSomething.readFile("test_data.txt", Object);
	//DoSomething.parseAddress();
	system("PAUSE");
	return 0;
}
