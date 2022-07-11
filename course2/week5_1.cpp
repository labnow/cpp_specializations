#include <iostream>
using namespace std;
int main(){
    int k; cin >> k;
    while(k>0){
        int m, n; cin >> m >> n;
        int a[100][100];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cin >> a[i][j];
        }
        int sum = 0;
        int *p = *a;
        for(int i=0;i<m*n;i++){
            if(i/n==0||i/n==(m-1)||i%n==0||i%n==(n-1)){
                sum+=*(p+(i/n)*100+i%n);
                cout << "i=" << i << " *p=" << *p << ' ' << sum << endl;}
        }
        cout << sum << endl;
        k--;
    }
    return 0;
}