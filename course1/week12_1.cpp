#include<iostream>
using namespace std;

int main(){
  int year; cin >> year;
  if(!(year%100==0&&year%400!=0)&&(year%3200!=0)&&year%4==0) cout << 'Y' << endl;
  else cout << 'N' << endl;
  return 0;
}