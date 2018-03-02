#include <iostream>
#include <string>
using namespace std;
int main()
{
char kon;
cout<< "Är kvinna eller man " << endl;
cin >> kon; 
cout << "Du är en  " << (kon != 'm' ? "kvinna." : "man." );
return 0;
} 
 
 

