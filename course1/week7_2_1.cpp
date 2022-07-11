#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n, n2;
  cin >> n;
  n2 = n;
  int count1 = 0, count2=0, count3=0, count4=0;
  while(n>0){
    int temp;
    cin >> temp;
    if(temp<=18) count1 ++;
    else if(temp<=35) count2++;
    else if(temp<=60) count3++;
    else count4++;  
    n--;
  }
  cout << "1-18: " << fixed << setprecision(2) << float(count1)/n2*100 << '%' << endl;
  cout << "19-35: " << float(count2)/n2*100 << '%' << endl;
  cout << "36-60: " << float(count3)/n2*100 << '%' << endl;
  cout << "60-: " << float(count4)/n2*100 << '%' << endl;
  return 0;
}