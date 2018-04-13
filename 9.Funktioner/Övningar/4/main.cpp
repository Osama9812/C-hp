#include <iostream>
using namespace std;

double basarea (double radie);
double volymscylinder (double radie, double hojd);
const double Pi= 3.14;

int main ()
{
  double r;
  double h;
  cout << "Mata in radien ";
  cin >> r;
  cout << "Mata in hojden ";
  cin >> h;
  double area = basarea (r);
  double volym = volymscylinder (r,h);
  cout << "arean ar " << area << endl;
  cout << "volymen ar " << volym << endl;
  return 0;
  
}

double basarea  (double radie)
{
  double area = Pi*radie*radie;
  return area;
}

double volymscylinder (double radie, double hojd)
{

  double volym = Pi*radie*radie*hojd;
  return volym;
  
}
 
