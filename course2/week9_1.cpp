#include <iostream>
using namespace std;
int main(){
    int m, k; cin >> m >> k;
    int num = 0;
    bool flag = (m%19==0);
    while (m>0)
    {
        if(m%10==3) num++;
        m/=10;
    }
    if(flag&&num==k) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}