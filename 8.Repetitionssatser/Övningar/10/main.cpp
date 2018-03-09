#include <iostream>
using namespace std;
int main()
{
 
 char val;
 bool fortsatt= true;
 double behallning= 1000;
 double insattning, uttag;
 
 
do 
{
    cout << "Meny " << endl;
    cout << "1.Insattning " << endl;
    cout << "2.Uttag " << endl;
    cout << "3.Visa behallning\n";
    cout << "4.Avsluta brogrammet\n\n";
 
	cout << "valja ditt val: ";
	cin >> val;
	
	 
	
	switch (val)
 	{
 	  case '1': 
	  cout << "hur mycket pengar vill du insatta? ";
	  cin >> insattning;
	  behallning =  behallning + insattning; 
	  break;
	  case '2': 
	  cout << "hur mycket pengar vill du utta? ";
	  cin >> uttag;
	  behallning = behallning - uttag; 
	  break;
	  case '3': 
	  cout << "Behallning ar  "<< behallning << "kronor\n ";
	  break;
	  case '4': 
	  fortsatt = false;
	  cout << "Programmet ar slut! ";
	  default:
	  	cout << "felinmatning.\n\n";
    }
	 

 }
 
 while (fortsatt);
  
  return 0;
}
