#include <iostream>
using namespace std;
int main()
{
 cout << "Min raknare " << endl;
 cout << "Du kan skriva vilken rankne satt du vill " << endl;
 cout << "Du kan sluta och fo svaret genom att svara med a " << endl;
 
 char satt;
 int a, b;
 
 cout << "Rakne satt : ";
 cin >> satt;
 
while (satt != 'a')
 {
 	cout << "tal 1: " ;
 	cin >> a;
 	cout << "tal 2: " ;
 	cin >> b;
	 
	if (satt == '+')
 	{
 		cout << a << "+" << b << "= "<< a+b << endl;
	 }
	else if (satt == '*')
 	{
 		cout << a << "*" << b << "= "<< a*b << endl;
	 }
	else if (satt == '/')
 	{
 		cout << a << "/" << b << "= "<< a/b << endl;
	 }
	else if (satt == '-')
 	{
 		cout << a << "-" << b << "= "<< a-b << endl;
	 }
	 
cout << "Rakne satt : ";
cin >> satt;
 }
  
  return 0;
}
