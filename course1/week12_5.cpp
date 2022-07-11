#include<iostream>
using namespace std;

int main(){
  char str[11], substr[4], str2[15];
  while (cin>>str>>substr)
  {
    // cin.getline(str, 11);
    // cin.getline(substr, 4);
    int index =0;
    char temp =str[0];
    int length = 1;
    for(int i=1;str[i]!='\0';i++){
      length++;
      if(str[i]>temp){
        temp = str[i]; index = i; 
      }
    }
    for(int i =0;i<=index;i++) str2[i] = str[i];
    for(int i = index+1, j=0;i<index+4;i++,j++) { 
    // cout << i << '-' << j << '-' << substr[j] << endl; 
    str2[i] = substr[j];}
    for(int i = index+4, j=index+1;i<length+3;i++,j++) {
      // cout << "i=" << i << "j=" << j << "str[j]=" << str[j] << endl;
      str2[i] = str[j];}
    // cout << index << ' ' << length << endl;
    for(int i=0;i<length+3;i++) cout << str2[i];
    cout << endl;
  }
  return 0;
}