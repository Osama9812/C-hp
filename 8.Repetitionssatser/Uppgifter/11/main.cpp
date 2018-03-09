#include <iostream>
using namespace std;
int main()
{
 
 float kontot=0;
 
 
 for (int n=0; n<20; n++)
 {
 	kontot = 1000 + kontot;
 	kontot = kontot * 1.05;
 	cout << kontot << endl;
 }
 
 cout << "Du har nu " << kontot << " kronor" << endl;
 
  return 0;
}
