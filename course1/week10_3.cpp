#include<iostream>
using namespace std;

int main(){
  char str[500];
  cin.getline(str, 500);
  int maxLength = 0;
  int indexOfMax = 0;
  int length = 0;
  for(int i=0;str[i]!='\0';i++){
    if(str[i] == ' ' or str[i] == '.'){
      if(length > maxLength){
        maxLength = length;
        indexOfMax = i - length;
      }
      length = 0;
    } 
    else length++;
  }
  // cout << indexOfMax << ' ' << maxLength << endl;
  for(int i =indexOfMax;i<indexOfMax+maxLength;i++) cout << str[i];
  return 0;
}
