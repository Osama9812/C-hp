#include <iostream>

using namespace std;

int main() {
	
	int falt [4];
	cin >> falt [0] >> falt[1] >> falt [2] >> falt[3];
	cout<< falt[0] << " " << falt[1] << " " << falt[2] << " " << falt[3] <<endl;
	int temp = falt[0];
	falt[0] = falt[3];
	falt[3] = temp;
	temp = falt[1];
	falt[1] = falt[2] ;
	falt[2] = temp; 
	cout<< falt[0] << " " << falt[1] << " " << falt[2] << " " << falt[3] <<endl;

	return 0;
}
