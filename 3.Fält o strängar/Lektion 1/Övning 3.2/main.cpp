#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
 int falt[3];
 cout<<"mata in 3 decimal tal=";
 cin>> falt[0]>>falt[1]>>falt[2];
 cout<< falt[0] << "\t"  << falt[1] << "\t"  << falt[2] << endl;
 int temp = falt[0];
 falt [0] = falt[2];
 falt [2] = temp;
 cout << "efter byte: " << falt[0] << ' ' << falt[1] << ' ' << falt[2] << endl;
 
 return 0;
  
}
