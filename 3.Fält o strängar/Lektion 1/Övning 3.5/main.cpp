#include <iostream>
#include <string>
using namespace std;
int main()
{
 setlocale(LC_ALL,"swedish");
 
 cout <<"klockan = "; 
 string tid;
 getline(cin, tid);
 int pos= tid.find(':', 0 );
 string timme= tid.substr(0, pos);
 int start = pos + 1;
 int langd = tid.length() -start;
 string minut= tid.substr(start,langd);
 cout << "timme: " << timme  <<endl;
 cout << "minut: " << minut <<endl;

 return 0;
  
}
