#include<iostream>
using namespace std;

int main(){   
    int n, k;
    cin >> n >> k;
    int a[1000];
    for(int i=0;i<n;i++) cin >> a[i];
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(a[i]+a[j]==k) {
                found = true;
                break;}
        }
        if(found) break;
    }
    if(found) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
