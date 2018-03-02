#include <iostream>

using namespace std;

int main() {
	
	cout << "ordet: ";
	string ordet;
	getline(cin,ordet);
	cout << ordet; 
	int pos= ordet.find('_',0);
	cout << pos.length () << endl;

	
	return 0;
}
