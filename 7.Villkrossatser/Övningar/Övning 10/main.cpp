#include <iostream>
#include <string>
using namespace std;
int main()
{
char kon;
cout<< "�r kvinna eller man " << endl;
cin >> kon; 
cout << "Du �r en  " << (kon != 'm' ? "kvinna." : "man." );
return 0;
} 
 
 

