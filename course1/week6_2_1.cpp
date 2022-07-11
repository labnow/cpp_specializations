#include <iostream>

using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int good;
    if(y%x==0){
        good = n - y/x;
    }else{
        good = n -y/x -1;
    }
    good = (good < 0) ? 0 : good;
    cout << good << endl;
    return 0;
}