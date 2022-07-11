#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    while(n>0){
        int distence;
        cin >> distence;
        float walk, bike;
        walk = distence/1.2;
        bike = 50 + distence/3.0;
        // cout << "bike:" << bike << " walk: " << walk << endl;
        if(walk<bike) cout << "Walk" << endl;
        else if(bike<walk) cout << "Bike" << endl;
        else cout << "All" << endl;
        n--;
    }
    return 0;
}
