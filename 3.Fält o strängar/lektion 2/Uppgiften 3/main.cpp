#include <iostream>

using namespace std;

int main() {
	
	cout << "ordet: ";
	string ordet;
	getline(cin,ordet);
	cout << "antalbokstaver: "<< ordet.length () << endl;
	
	return 0;
}
