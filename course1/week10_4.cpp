#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int arr[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++) cin >> arr[i][j];
  }
  int n, m;
  cin >> n>> m;
  if(n>4||m>4||n<0||m<0) cout << "error" << endl;
  else{
    for(int k =0;k<5;k++){
      int temp;
      temp = arr[n][k];
      arr[n][k] = arr[m][k];
      arr[m][k] = temp;
    }
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++) cout << setw(4) << arr[i][j];
      cout << endl;
    }
      }
  return 0;
}
