#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{ 
  
  int a,b,c;
  cout<< "Mata in timmar, minuter och sekunder "<< endl;
  cout<< "Timmar:  "<< endl;
  cin >> a;
  int f = a*3600;
  cout<< "Minuter: "<< endl;
  cin >> b;
  int g = b*60;
  cout<< "Sekunder:  "<< endl;
  cin >> c;
  int summan = f+g+c;
  int tim = summan/3600;
  int r = summan%3600;
  int min = r/60;
  int sek = r%60;
  cout<< "Den inmattade tiden motsvaras av " << tim << " timmar, "  << min << " minuter och "  << sek  << " sekunder."  << endl;
  
  
  return 0;
  
} 
 
