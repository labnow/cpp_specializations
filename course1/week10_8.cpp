#include<iostream>
using namespace std;

int main(){
  int arr[10001] = {0};
  int l, m; cin >> l >> m;
  while(m>0){
    int start, end;
    cin >> start >> end;
    for(int i=start; i<=end;i++) arr[i] = 1;
    m--;
  }
  int num;
  for(int i=0;i<=l;i++){
    if(arr[i] == 0) num++; }
  cout << num << endl;
  return 0;
}
