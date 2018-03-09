#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{ 
  
  cout<< "Mata in din text "<< endl;
  string text;
  getline (cin, text);
  string text1= text.substr(0,2);
  cout << text1 << endl;
  string text2 =text.substr(13.2);
  cout << text1<< text2 << endl;
  
  return 0;
  
} 
