#include <iostream>

using namespace std;

int main () {
	
	const double pris = 9.90;
	int antal;
	double rabbat;
	cout << "Antal skivor ";
	cin>> antal;
    if ( antal < 10 )
	{
	rabbat = 0;
    }
    else if (antal < 50 )
    {
	rabbat = 5;
    }
    else if (antal < 100 )
    {
	rabbat = 10;
    }
    else 
    {
    rabbat = 15;
	}
	
	cout << "kostnaden för antal skivor" << antal << " blir " ;
	cout << antal * pris * (1-rabbat/100);
	return 0;
	
}
