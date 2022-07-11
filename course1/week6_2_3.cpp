#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max = 0;
    while(n>0){
        int temp;
        cin >> temp; 
        if(temp > max) max = temp;
        n--;
    }
    cout << max << endl;
    return 0;
}