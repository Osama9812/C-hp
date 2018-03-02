#include <iostream>

using namespace std;

int main () {
	
	float a;
	cout << "hur mycket bärnske finns i bilen? ";
	cin>> a;
	if (a < 10)
	{
	cout << "DU svarade bör tanka! " << endl;
	cout << "du kan fylla " << 50 - a << " o det kostar " << (50 - a) * 9.50 << endl;
    }
	else 
	{
	cout << "kör vidare " << endl;
    }

	return 0;
	
}
