#include <iostream>
#include<iomanip>
using namespace std;
struct person
{
    int num;
    float heavy;
};

int main(){
    int m;
    float a; 
    cin >> m >> a;
    person persons[50];
    person *p = persons;
    for(int i=0;i<m;p++,i++) cin >> p->num >> p->heavy;
    p = persons;
    // for(int i=0;i<m;p++,i++) {cout << p->num << ' ' << p->heavy; cout << endl;}
    // sort
    for(int i =0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(persons[j].heavy<persons[j+1].heavy){
                person tmp;
                tmp = persons[j];
                persons[j] = persons[j+1];
                persons[j+1] = tmp;
            }
        }

    }
    int total_num = 0;
    p = persons;
    for(int i=0;i<m;p++,i++){
        if(p->heavy > a){
            cout << setfill('0') << setw(3) << p->num << ' ' << fixed << setprecision(1) << p->heavy << endl; 
            total_num++;}
    }
    if(total_num==0) cout << "None" << endl;
    return 0;
}