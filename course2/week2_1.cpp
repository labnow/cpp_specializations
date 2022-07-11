#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[100];
    bool flag = false;
    int i  =0;
    while(n>0){
        int temp;
        cin >> temp;
        if(temp==i){
            cout << temp << endl;
            flag = true;break;
        }
        i++;n--;
    }
    if(!flag) cout << 'N' << endl;
    return 0;
}