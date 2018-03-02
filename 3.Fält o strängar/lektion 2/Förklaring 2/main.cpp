#include <iostream>
#include <string> 
using namespace std;
int main() {
  
  
  string s;
  cout << "mata in s:";
  getline (cin,s);
  string s1;
  cout << "mata in s1:";
  getline (cin,s1);
  s = s + s1;
  cout << s << endl;
  cout << s + "Gymnasieskola" << endl;
  s.at(0)= 'S';
  cout << s << s.size() << endl;
  int hitta = s.find('o');
  int hitta2 = s.find("o",7);
  cout << hitta << hitta2 << endl;
  string delstring = s.substr(7,5);
  cout << delstring << endl;
  
  return 0;
}
