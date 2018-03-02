#include <iostream>
#include <string>
using namespace std;
int main()
{
	int start, slut, steg;
	cout<< "start"; cin >> start; 
	cout<< "slut"; cin >> slut;
	cout<< "steg"; cin >> steg;  
for (int n = start ; n > slut ; n = n - steg )
{
cout<< n << ' ';
}
return 0;
} 
 
 

