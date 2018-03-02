#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  
  float a, b, c;
  
  cout<< "mata in tre tal";
  cin>> a >> b >>c;
  
  float summa = a+b+c; 
  cout << "summan=" << summa << endl;
  
  float medel = summa/3; 
  cout << "medel=" << fixed << setprecision(2) << medel << endl;
  
  
  
  
 
  return 0;
  
} 
