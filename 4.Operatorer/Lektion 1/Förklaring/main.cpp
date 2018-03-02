#include <iostream>
#include <string>
using namespace std;
int main()
{
  
  string in;
  cin>> in;
  cin.ignore(1000, '\n');
  // klipper av utmaningen
  //vid mellanslag
  cout << in << endl;
  //klipper av vid nyradstecken
  getline (cin, in);
  cout << in << endl;
  
  /*
  string s = " observera";
  int hitta = s.find("seg",0);
  cout << hitta << endl;
  string delstring = s.substr(2,7);
  cout << delstring<< endl;
  */
  
  /*
  string strang = "lektonsasal";
  cout << strang << endl;
  strang = "kul";
  cout << strang << endl;
  int langd = strang.size();
  cout << langd<< endl;
  int hitta = strang.find('u',2);
  cout << hitta << endl;
  */
  return 0;
  
}
