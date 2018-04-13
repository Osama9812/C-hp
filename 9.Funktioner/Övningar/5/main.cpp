#include <iostream>
using namespace std;

void ritatraingel (int hojd, char tecken);


int main ()
{
  char a;
  cout << "Valj en tecken " ;
  cin >> a;
  cout << "Mata in hojden ";
  int h;
  cin >> h;
  ritatraingel (h, a);
  return 0;
  
}

void ritatraingel (int hojd, char tecken)
{
  
  for (int i=1; i<=hojd;i++)
  {
     for (int j=1; j<=i;j++)
     {
       cout << tecken;
     }
    cout << endl;
  }


return;
  
}
 
