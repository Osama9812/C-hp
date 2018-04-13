#include <iostream>
using namespace std;

double basytans (double radie);

int main ()
{
  double r;
  cout << "Mata in radien ";
  cin >> r;
  double area= basytans(r);
  cout << "Bassen ar " << area << endl;
  return 0;
  
}

double basytans (double radie)
{
  const double Pi= 3.14;
  double area = Pi*radie*radie;
  return area;
  
}
