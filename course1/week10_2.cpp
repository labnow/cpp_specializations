#include<iostream>
using namespace std;

int main(){
  char str1[80], str2[80];
  cin.getline(str1, 80);
  cin.getline(str2, 80);
  for(int i =0;str1[i]!='\0';i++){
    if(str1[i] < 'Z' && str1[i] > 'A') str1[i] += 32;
  }
  for(int i =0;str2[i]!='\0';i++){
    if(str2[i] < 'Z' && str2[i] > 'A') str2[i] += 32;
  }
  int i =0;
  char result;
  while(str1[i]!='\0'&&(str1[i]==str2[i])){
    i++;
  }
  if(str1[i]>str2[i]) result = '>';
  else if(str1[i]<str2[i]) result = '<';
  else result = '=';
  cout << result << endl;
  return 0;
}
