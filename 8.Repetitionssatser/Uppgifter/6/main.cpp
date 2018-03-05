#include <iostream>
#include <string>
using namespace std;
int main()
{

char tecken='*';
int rader, kolumner;
cout << "skriv antal rader: ";
cin >> rader; 
cout << "skriv antal kolumner: ";
cin >> kolumner;

for (int m = 0 ; m < rader ; m++ )
{
   for (int n = 0 ; n < kolumner ; n++ )
   {
   	cout << tecken << '\t';
   }
cout << endl;
}




return 0;
} 
 
 

