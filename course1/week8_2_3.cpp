#include<iostream>
using namespace std;

int main(){   
    int n, k; 
    while(cin >> n >> k){
        float house = 200;
        int year = 1;
        bool got = false;
        while(year < 21){
            if(house <= n*year) {
                cout << year << endl;
                got = true;
                break;}
            // house price
            house*=1+(k/100.0);
            year ++;
        }
        if(got==false) cout << "Impossible" << endl;
    }

    return 0;
}
