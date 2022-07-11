#include<iostream>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int arr[100];
  for(int i =0;i<n;i++) cin >> arr[i];
  for(int k=0;k<m;k++){
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
  }
  for(int i =0;i<n;i++) cout << arr[i] << ' ';
  cout << endl;
  return 0;
}
