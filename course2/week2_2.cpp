#include <iostream>
using namespace std;
int judgement(int dong,int hong,int po,int tai){
    int a = (dong==1) + (hong==4) + (po==3);
    int b = (hong==1) + (dong==4) + (po==2) + (tai==3);
    int c = (hong==4) + (dong==3);
    int d = (po==1) + (tai==4) + (hong==2) + (dong==3);
    // cout << a << b << c << d << endl;
    if(a==1&&b==1&&c==1&&d==1) return 1;
    else return 0;
}
int main(){
    int dong=0,hong=0,po=0,tai=0;
    // if a is right
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            for(int k=1;k<5;k++){
                dong=i;hong=j;po=k;tai = 10 - dong - hong - po;
                if(dong*hong*po*tai!=24) continue;
                if(judgement(dong, hong, po, tai)==1){
                    cout << po << '\n' << dong << '\n' << tai << '\n' << hong << endl;
                    return 0;}
            }
        }
    }
}