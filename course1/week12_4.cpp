#include<iostream>
using namespace std;

int main(){
  int a, b;
  char c;
  cin >> a >> b >> c;

  if(c=='+') cout << a+b << endl;
  else if(c=='-') cout << a-b << endl;
  else if(c=='*') cout << a*b << endl;
  else if(c=='/'&&b!=0) cout << a/b << endl;
  else if(c=='/') cout << "Divided by zero!" << endl;
  else cout << "Invalid operator!" << endl;
  return 0;
}