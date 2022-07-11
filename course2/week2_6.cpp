#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    char status[100][100];
    int i=0;
    while(i<n){
        cin >> status[i];
        // cin.getline(status[i], n+1);
        i++;
    }
    int m; cin >> m;
    m--;
    while(m>0){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(status[j][k] == '@'){
                    // up
                    if(j-1>=0&&status[j-1][k]=='.') status[j-1][k] = '-';
                    //down
                    if(j+1<n&&status[j+1][k]=='.') status[j+1][k] = '-';
                    //right
                    if(k+1<n&&status[j][k+1]=='.') status[j][k+1] = '-';
                    //left
                    if(k-1>=0&&status[j][k-1]=='.') status[j][k-1] = '-';
                }
            }}
        for(int j=0;j<n;j++){
           for(int k=0;k<n;k++){
                if(status[j][k] == '-') status[j][k] = '@';
        }}
        m--;
    }


    int sum=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(status[j][k] == '@') sum++;
        }
    }
    cout << sum << endl;
    // for(int j=0;j<n;j++){
    //     for(int k=0;k<n;k++) cout << status[j][k];
    //     cout << endl;
    // }

    return 0;
}