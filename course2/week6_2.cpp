#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    char dna[255][255];
    char(*p)[255] = dna;
    for(int i=0;i<n;p++,i++) cin >> *p;
    // A-T, G-C
    p=dna;
    for(int i=0;i<n;p++,i++){
        char *q = *p;
        for(;*q!='\0';q++){
            switch (*q)
            {
            case 'A': cout << 'T'; break;
            case 'T': cout << 'A'; break;
            case 'G': cout << 'C'; break;
            case 'C': cout << 'G'; break;
            }
        }
        cout << endl;
    }

    return 0;
}