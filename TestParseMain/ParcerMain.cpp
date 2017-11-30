#include <iostream>
#include "Parcer.h"
using namespace std;
int main()
{
	Parser DoSomething;
	Data Object;
	DoSomething.readFile("test_data.txt", Object);
	cout << Object.getAddress() << endl;
	cout << Object.getAddressType() << endl;
	//DoSomething.parseAddress();
	system("PAUSE");
	return 0;
}