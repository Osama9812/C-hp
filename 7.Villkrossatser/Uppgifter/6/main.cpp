#include <iostream>
#include <string>
using namespace std;
int main()
{

int a,b,c; 
cout << " Gissa mitt hemliga tal(1,2 eller 3)  ";
cin >> a >> b >> c ;



if ( (a == 4) && (b== 8) && (c == 4))
{  
  cout << "Ratt svar, Du klarade det po ett f?rs?k" << endl; 
}

else if   ( (a == 4) && (b== 8) && (c == 4))
{
  cout << "fel svar. Gissa en gang till";
  cin >> a >> b >> c;
  cout << "Ratt svar, Du klarade det po tvo f?rs?k" << endl;
}

else {
	cout << "Fel svar, Du klarade inte det " << endl;
}
  return 0;
} 
