#include <isotream>
#include "Hex.h"

using namespace std;

int main()
{
  Hex obj;

#  obj.getBinary();


  obj.toBinary();

}

Hex::Hex()
{
}

void Hex::toBinary()
{
  long int i=0;
  char  data[100];  
  cin>>data   // need to get a data after search the address

  while(data[i])
  {
      switch(data[i])
      {
         case '0': cout<<"0000";
              break;
         case '1': cout<<"0001";
              break;
         case '2': cout<<"0010";
              break;
         case '3': cout<<"0011";
              break;
         case '4': cout<<"0100";
              break;
         case '5': cout<<"0101";
              break;
         case '6': cout<<"0110";
              break;
         case '7': cout<<"0111";
              break;
         case '8': cout<<"1000";
              break;
         case '9': cout<<"1001";
              break;
         case 'a':
         case 'A': cout<<"1010";
              break;
         case 'b':
         case 'B': cout<<"1011";
              break;
         case 'c':
         case 'C': cout<<"1100";
              break;
         case 'd':
         case 'D': cout<<"1101";
              break;
         case 'e':
         case 'E': cout<<"1110";
              break;
         case 'f':
         case 'F': cout<<"1111";
              break;
         default : cout<<"\n Invalid Hexadecimal Digit";
      }
      i++;
  }
  return 0;
}
          
