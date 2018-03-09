#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
  
  double a, b, c;
  cout<< "Mata in tre flyttal"<< endl;
  cout<< "tal 1: ";
  cin >> a;
  cout<< "tal 2: ";
  cin >> b;
  cout<< "tal 3: ";
  cin >> c;
  double medelvardet = (a+b+c)/3;
  cout << "medelvardet av " << a << ", " << b << " och " << c << " blir " << fixed << setprecision(1) << medelvardet << endl;
  
  return 0;
  
}
