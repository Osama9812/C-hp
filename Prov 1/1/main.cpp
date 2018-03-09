#include <iostream>
using namespace std;

int main ()
{
  
  char gemen;
  cout << "Mata in en gemen: ";
  cin >> gemen;
  cout << gemen << endl;
  int versaler = (int) gemen-32;
  cout << "Motsvarande VERSAL Är: " << (char) versaler << endl; 
  
  return 0;
  
  
}
