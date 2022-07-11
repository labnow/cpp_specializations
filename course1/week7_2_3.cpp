#include<iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[100];
  for(int i=0;i<n;i++) cin >> a[i];
  int threshold = 0;
  for(int i=0;i<n;i++) threshold =  a[i] > threshold? a[i] : threshold;
  for(int i = 0;i<k-1;i++){
    int tempMax = 0;
    for(int j=0;j<n;j++){
      if(a[j]>tempMax&&a[j]<threshold) tempMax = a[j];
    }
    threshold = tempMax;
  }
  cout << threshold;
  return 0;
}