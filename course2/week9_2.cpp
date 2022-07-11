#include <iostream>
using namespace std;
struct alpha
{   
    char character = '@';
    int occurence = 0;
    int first_appear = 501;
};
int main(){
    char str[501];
    cin.getline(str, 501);
    alpha alphas[26];
    alpha *p = alphas;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z') str[i]-=32;
        if(str[i]>='A'&&str[i]<='Z'){
            p = alphas + str[i] - 65;
            if(p->first_appear == 501) {p->first_appear = i; p->character=str[i];}
            p->occurence++;
        }
    }
    // sort by alpha.first_appear
    for(int i =0;i<25;i++){
        for(int j=0;j<25-i;j++){
            if(alphas[j].first_appear>alphas[j+1].first_appear){
                alpha temp;
                temp = alphas[j+1];
                alphas[j+1] = alphas[j];
                alphas[j] = temp;
            }
        }
    }
    // get 2nd most occurence
    p=alphas;
    int temp_max = 0;
    for(int i=0;i<26;p++,i++) temp_max = p->occurence > temp_max?p->occurence:temp_max;
    int threshold = temp_max;
    temp_max = 0;
    p=alphas;
    for(int i=0;i<26;p++,i++) temp_max = p->occurence > temp_max&&p->occurence<threshold?p->occurence:temp_max;
    // p = alphas;
    // p=alphas;
    // for(int i=0;i<26;p++,i++) cout << p->character << ' ' << p->first_appear << ' ' << p->occurence << endl;
    p=alphas;
    for(int i=0;i<26;p++,i++){
        if(p->occurence == temp_max) {cout << p->character << '+' << char(p->character+32) << ':' << p->occurence << endl; break;}
    }
    return 0;
}