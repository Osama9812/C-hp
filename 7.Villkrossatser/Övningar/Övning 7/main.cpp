#include <iostream>
using namespace std;
int main()
{
double behallning = 1000;
double insatt,uttag;
char val;
cout << "Meny" << endl;
cout << "1.insättning"<< endl << "2.uttag" << endl << "3.visa behållning" << endl;
cin >> val;
switch (val) 
{
case '1':
cout << "ange hur stor insättning du vill göra" << endl;
cin>> insatt;
cout << insatt + behallning << endl;
break;

case '2':
cout << "ange hur stor uttagdu vill göra" << endl;
cin >> uttag;
if (uttag > behallning)
{
  cout << "för stort uttag" << endl;
  uttag=0;
}
behallning -= uttag;
break;

case '3':
break;
default:
cout << "felinmatning\n" << endl;
}
cout << "du har" << behallning << "på kontot.";
return 0;
}
