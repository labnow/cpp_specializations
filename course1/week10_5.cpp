#include<iostream>
using namespace std;

int main(){
  int arr[100][100];
  int n; cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) cin >> arr[i][j];
  }
  int count = 0;
  for(int i=1;i<n-1;i++){
    for(int j=1;j<n-1;j++){
      if(arr[i-1][j]-arr[i][j]>=50&&arr[i+1][j]-arr[i][j]>=50&&arr[i][j+1]-arr[i][j]>=50&&arr[i][j-1]-arr[i][j]>=50) count++;
    }
  }
  cout << count << endl;
  return 0;
}
