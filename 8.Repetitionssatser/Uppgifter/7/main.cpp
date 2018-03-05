#include <iostream>
using namespace std;
int main()
{
  
  int befolkning = 100;
  int er= 0;
  
  while (befolkning < 2000000) // fungerar med samma princip som if satsen, då gäller att om villkor är sant, då blir svaret följande.
                               // skillnade är att while, repetrear villkoren tills det blir mer än 2 miljoner, men if satsen tillampa 
							   // villkoren gång om det är sant.
  {
  	befolkning = befolkning * 1.05;
  	er++; // den är villkoren som tillämpa när befolkning är mindre än två miljöner.
  }
 cout << "Efter " << er << "or ar befoklning " << befolkning <<endl; 
  return 0;
}
