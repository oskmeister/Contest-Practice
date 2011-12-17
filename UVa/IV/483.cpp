#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  char str[100000];
  while(cin.getline(str, 100000)){
    string nstr(str);
    stringstream ss;
    ss << nstr;
    string wrd;
    ss >> wrd;
    reverse(wrd.begin(), wrd.end());
    cout << wrd;
    while(ss >> wrd){
      reverse(wrd.begin(), wrd.end());
      cout << " " << wrd ;
    }
    cout << endl;
  }
}