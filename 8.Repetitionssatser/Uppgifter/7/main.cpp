#include <iostream>
using namespace std;
int main()
{
  
  int befolkning = 100;
  int er= 0;
  
  while (befolkning < 2000000) // fungerar med samma princip som if satsen, d� g�ller att om villkor �r sant, d� blir svaret f�ljande.
                               // skillnade �r att while, repetrear villkoren tills det blir mer �n 2 miljoner, men if satsen tillampa 
							   // villkoren g�ng om det �r sant.
  {
  	befolkning = befolkning * 1.05;
  	er++; // den �r villkoren som till�mpa n�r befolkning �r mindre �n tv� milj�ner.
  }
 cout << "Efter " << er << "or ar befoklning " << befolkning <<endl; 
  return 0;
}
