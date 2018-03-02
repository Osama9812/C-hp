#include <iostream>
#include <string>
using namespace std;
int main()
{

string kon, barn;
int older;
cout << " Ar du en man eller kvinna? " ;
cin >> kon;
cout << " Har du barn? " ;
cin >> barn;
cout << " Hur gammal ar du? " ;
cin >> older;


if ( (older < 30) && (kon == "man") || ( barn == "Nej") && (kon == "man"))
{  
  cout << "Ratt svar, Du klarade det po ett f?rs?k" << endl; 
}

else if   ( (older < 30) && ( barn == "Nej"))
{
  cout << "fel svar. Gissa en gang till";
}

else {
	cout << "Fel svar, Du klarade inte det " << endl;
}
  return 0;
} 
