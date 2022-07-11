#include<iostream>
using namespace std;

int main(){   
    int n; cin >> n;
    int current=10;
    while(current<=n){
        int temp = current;
        int sum =0;
        while(temp>0){
            sum+= temp%10;
            temp/=10;
        }
        if(current%sum==0) cout << current << endl;
        current++;
    }

    return 0;
}
