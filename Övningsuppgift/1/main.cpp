#include <iostream>
using namespace std;
int main() 
{
	char svar;
	int tal = 0;
	
	do
	{
		int nytal;
		cout << "skriv in en tal:";
		cin >> nytal;
		tal = tal + nytal;
		cout << " summan blir : " << tal << endl;
		cout << "Vill du fortsatta? J/N";
		cin >> svar;		
	}
	while (svar = 'J' );
	return 0;
}

