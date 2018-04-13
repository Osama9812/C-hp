#include <iostream>
using namespace std;

double volymscylinder (double radie, double hojd);

int main ()
{
  double r;
  cout << "Mata in radien ";
  cin >> r;
  double h;
  cout << "Mata in hojden ";
  cin >> h;
  double volym = volymscylinder (r,h);
  cout << "volymen ar " << volym << endl;
  return 0;
  
}

double volymscylinder (double radie, double hojd)
{
  const double Pi= 3.14;
  double volym = Pi*radie*radie*hojd;
  return volym;
  
}
