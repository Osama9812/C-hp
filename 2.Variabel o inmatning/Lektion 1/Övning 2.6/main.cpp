#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  
  int a, b, c;
  
  cout<< "mata in tre tal";
  cin>> a >> b >>c;
  
  int summa = a+b+c; 
  cout << "summan=" << summa << endl;
  
  double medel = (double)summa/3; 
  cout << "medel=" << fixed << setprecision(2) << medel << endl;
  
  
  
  
 
  return 0;
  
} 
