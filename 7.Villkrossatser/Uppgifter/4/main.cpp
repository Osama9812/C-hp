#include <iostream>
#include <string>
using namespace std;
int main()
{

char a; 
cout << " vad vill du resa med ";
cin >> a;

switch (a)
{ 
  case 'b':
  cout << "Du vill resa med bussen" << endl; 
  break;
  case 'i':
  cout << "Du vill resa med bilen"<< endl; 
  break;
  case 't':
  cout << "Du vill resa med toget" << endl; 
  break;
  case 'c':
  cout << "Du vill resa med cykelen" << endl; 
  break;
}
  return 0;
} 
