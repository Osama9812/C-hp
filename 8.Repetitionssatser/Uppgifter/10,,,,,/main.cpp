#include <iostream>
using namespace std;
int main()
{
  int falt[50];
  cout << "Mata in talen, Hogst 50, avsluta med negativ tal ";
  int n = 0;
  int invarde;
  
  do 
  {
  	
  	cin >> invarde;
  	if (invarde>=0)
  	{ 

  	falt[n]=invarde;
  	n++;
   } 
}while (invarde >= 0);

for (int i=0; i<n; i++ )
cout << falt [i] << endl;
  
  int temp = falt[0];
  for (int i=1; i<n; i++ )
  {
  	if (falt[i]>temp)
  	temp=falt[i]; 	
  }
  
  cout << temp << endl;
  
  
  
  
  return 0;
}
