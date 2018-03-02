#include <iostream>
#include <string>
using namespace std;
int main()
{

char a; 
cout << " Vill du addera talen eller subtraherar? ";
cin >> a;
int b, c;
cout << "Mata in de tv? talen:" << endl;
cin >> b >> c;
if ( a == '+')
{  
  cout << c+b << endl;
}

else  
{
  cout << c-b << endl;
}

  return 0;
} 

