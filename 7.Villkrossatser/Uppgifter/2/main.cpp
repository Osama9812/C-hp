#include <iostream>
#include <string>
using namespace std;
int main()
{

double avstand, lange; 
char boende;
cout << " Hur l?ng avstand ?r det till arbetet? ";
cin >> avstand;
cout << " Bor du sjalv eller med n?gon? ";
cin >>  boende;
cout << " For hur l?nge?";
cin >> lange;

if ((avstand > 50) && (boende == 's') && (lange < 1))
{ 
cout << "Du har ratt " << endl;
}

else if  ((avstand > 50) && (boende == 'n') && (lange < 3))
{
cout << "Du har ratt" << endl;
}

else 
{
 cout << "Du har inte ratt" << endl;
}
 
 return 0;
} 
