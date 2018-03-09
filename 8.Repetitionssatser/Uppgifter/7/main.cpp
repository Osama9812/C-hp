#include <iostream>
using namespace std;
int main()
{
 
 char val;
 bool fortsatt= true;
 int start= 0;
 int okn, min;
 
 
do 
{
    cout << "Meny " << endl;
    cout << "1.Nollstall antalet passagerae  " << endl;
    cout << "2.Oka antalet passagerare med en " << endl;
    cout << "3.Minska antalet passagerare med en"<< endl;
    cout << "4.Skriv ut antalet passagerare\n\n";
 
	cout << "valja ditt val: ";
	cin >> val;
	
	 
	
	switch (val)
 	{
 	  case '1': 
	  start =  0; 
	  break;
	  case '2': 
	  start = start + 1; 
	  break;
	  case '3': 
	  start = start -1; 
	  break;
	  case '4': 
	  cout << "antal passagerare ar " << start <<endl; 
	  default:
	  	cout << "felinmatning.\n\n";
    }
	 

 }
 
 while (fortsatt);
  
  return 0;
}
