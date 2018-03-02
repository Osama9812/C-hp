#include <iostream>

using namespace std;

int main () {
	
	int tid;
	cout << "mata antal monader: ";
	cin>> tid;
	int ur = tid / 12;
	int mon = tid % 12; 
	cout << "tid =" << ur << "or och " << mon << "monader" << endl;
	
	return 0;
}
