#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 setlocale(LC_ALL,"swedish");
 
 cout <<"engleska ordet ="; 
 char eng [10];
 cin >> eng;
 cout <<"svenska oversätning =";
 char sva[10];
 cin >> sva;
 cout << "Det engelska ordet " << eng << " betyder "<< sva << " po svenska" << endl;
 
 return 0;
  
}
