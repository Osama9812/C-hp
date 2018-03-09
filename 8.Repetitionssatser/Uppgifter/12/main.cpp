#include <iostream>
using namespace std;
int main()
{
	
 
 float kontot=0;
 int n = 1;
 
 while (kontot < 10000)
 {
 	kontot = 1000 + kontot;
 	kontot = kontot * 1.05;
 	cout << n << kontot<< endl;
 	n++;
 }
 cout << "Efter " << n << " or har du " << kontot  << " kronor";
 
 
  return 0;
}
