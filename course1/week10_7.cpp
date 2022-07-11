#include <iostream>
using namespace std;

int main()
{
  int n;
  while (cin>>n)
  {  
    if (n == 0) return 0;
    int a[15000];
    for(int i=0;i<n;i++) cin >> a[i];
    // bubble
    for(int i=n-1;i>0;i--){
      for(int j=0;j<i;j++){
        if(a[j]>a[j+1]){
          int temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }
      // for(int k=0;k<n;k++) cout << a[k] << ' ';
      // cout << endl;
    }
    if(n%2==0) cout << (a[n/2] + a[n/2 -1])/2 << endl;
    else cout << a[n/2] << endl;

  }
}