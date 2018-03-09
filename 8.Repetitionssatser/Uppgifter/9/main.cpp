#include <iostream>
#include <string>
using namespace std;
int main()
{
	
int antal;
int summa=0;
int tsumma=1;
cout << "hur manga vara den ska vara? ";
cin >> antal; 

for (int n = 0 ; n < antal ; n++ )
{
	
	summa = summa + 1;
	tsumma = tsumma*summa;
	
	cout << "Okar med " << 1 << " och ar nu " << tsumma << endl;
	
}
cout << "Summan blir " << tsumma << endl;


return 0;
} 
 
 

