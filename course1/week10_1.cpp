#include<iostream>
using namespace std;

int main(){
  int a =0, e=0,i1=0,o=0,u=0;
  char str[80];
  cin.getline(str, 80);
  for(int i=0;str[i]!='\0';i++){
    switch (str[i])
    {
    case 'a': a++; break;
    case 'e': e++; break;
    case 'i': i1++; break;
    case 'o': o++; break;
    case 'u': u++; break;
    }
  }
  cout << a << ' ' << e << ' ' << i1 << ' ' << o << ' ' << u << endl;
  return 0;
}
