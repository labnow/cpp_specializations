#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // while(n>0){
  //   n/=100
  // }
  int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
  n1 = n/100;n%=100;
  n2=n/50;n%=50;
  n3=n/20;n%=20;
  n4=n/10;n%=10;
  n5=n/5;n%=5;
  n6=n;
  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;
  cout << n4 << endl;
  cout << n5 << endl;
  cout << n6 << endl;

  return 0;
}