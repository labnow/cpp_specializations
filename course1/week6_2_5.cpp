#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[3];
    int i = 0;
    while(n>0){
        a[i] = n%10;
        n/=10;
        i++;
    }
    for(int i = 2;i>=0;i--) cout << a[i] << endl;
    return 0;
}