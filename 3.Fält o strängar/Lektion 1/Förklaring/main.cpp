#include <iostream>
#include <string>
using namespace std;
int main()
{
 
  // datatyp namn [positivet heltal];
  //double falt [3]
  /* 3 "fack" att placera flyttal i
   *indexeras från 0-2
   */
  // tilldelning 
  /*falt[0]=0;
  falt[1]=1;
  falt[2]=2;
  //deklerara och tilldela
  falt2[3]= {3.56,6.4,0.3};
  falt3[]= {3.56,6.4,0.3};
  */
  //double flyt = 3.56;
  
  //flyt och falt2 [0]
  //är helt ekvivalenta 
  
  /*char falt[4];
  falt[0]='g';
  falt[1]='r';
  falt[2]='a';
  falt[3]='n';
  cout<< falt[0] << falt[1] << falt[2] << falt[3] <<endl;
  */
  
  /*char falt[]={'g','r','a','n'};
  cout<< falt[0]<<falt[1]<<falt[2]<<falt[3]<<endl;
  cout<< falt << endl;
  */
  
  // ett teckenfält med 8 platser skapas 
  // 'j','u','l','g','r','a','n','\0'
  /*char nyfalt[] = "julgran";
  cout << nyfalt << endl; // stoppar när '\0' hittas  
  */
  
  string a ="asso";
  string b = "osama";
  cout << a << endl;
  a = a+b;
  cout << a << endl;
  return 0;
  
}
