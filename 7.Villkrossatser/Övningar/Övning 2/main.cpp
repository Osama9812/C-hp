#include <iostream>

using namespace std;

int main () {
	
	float a;
	cout << "hur mycket b�rnske finns i bilen? ";
	cin>> a;
	if (a < 10)
	{
	cout << "DU svarade b�r tanka! " << endl;
	cout << "du kan fylla " << 50 - a << " o det kostar " << (50 - a) * 9.50 << endl;
    }
	else 
	{
	cout << "k�r vidare " << endl;
    }

	return 0;
	
}
