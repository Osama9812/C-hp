#include <iostream>

using namespace std;

int main () {
	
	double tal1, tal2;
	cout << "mata in två tal: ";
	cin>> tal1 >> tal2;
	tal1 = tal2;
	tal2 = tal1;
	cout << tal1  << tal2  << endl;

	return 0;
	
}
