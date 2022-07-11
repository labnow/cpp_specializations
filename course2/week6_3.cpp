#include <iostream>
using namespace std;
int main(){
    int m, n; cin >> m >> n;
    int mountain[20][20];
    int *p = *mountain;
    for(int i=0;i<m*n;i++) cin >> *(p+i/n*20+i%n);
    for(int i=0;i<m*n;i++){
        // bool t_higher = true;
        p=*mountain+i/n*20+i%n;
        // if(i%n>0&&*p<*(p-1)) {cout << *p << ' ' << *(p-1) << endl; continue;}
        // if(i%n<n-1&&*p<*(p+1)) {cout << *p << ' ' << *(p+1) << endl; continue;}
        // if(i/n<m-1&&*p<*(p+20)) {cout << *p << ' ' << *(p+20) << endl; continue;}
        // if(i/n>0&&*p<*(p-20)) {cout << *p << ' ' << *(p-20) << endl; continue;}

        if(i%n>0&&*p<*(p-1)) { continue;}
        if(i%n<n-1&&*p<*(p+1)) { continue;}
        if(i/n<m-1&&*p<*(p+20)) { continue;}
        if(i/n>0&&*p<*(p-20)) { continue;}

        cout << i/n << ' ' << i%n << endl;
        // else()
    }

    return 0;
}