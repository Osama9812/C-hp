#include <iostream>
using namespace std;
int main()
{
double behallning = 1000;
double insatt,uttag;
char val;
cout << "Meny" << endl;
cout << "1.ins�ttning"<< endl << "2.uttag" << endl << "3.visa beh�llning" << endl;
cin >> val;
switch (val) 
{
case '1':
cout << "ange hur stor ins�ttning du vill g�ra" << endl;
cin>> insatt;
cout << insatt + behallning << endl;
break;

case '2':
cout << "ange hur stor uttagdu vill g�ra" << endl;
cin >> uttag;
if (uttag > behallning)
{
  cout << "f�r stort uttag" << endl;
  uttag=0;
}
behallning -= uttag;
break;

case '3':
break;
default:
cout << "felinmatning\n" << endl;
}
cout << "du har" << behallning << "p� kontot.";
return 0;
}
