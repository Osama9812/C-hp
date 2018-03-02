#include <iostream>
#include <string>
using namespace std;
int main()
{
 setlocale(LC_ALL,"swedish");
 
 cout <<"ordet = "; 
 string ord;
 cin >> ord;
 getline(cin, ord);
 cout << "antal teckner " << ord.size() << endl;
 cout << "antal teckner " << ord.length() << endl;
 return 0;
  
}
