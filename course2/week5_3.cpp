#include <iostream>
using namespace std;
int length_of(char array[]){
    int length = 0;
    for(int i=0;array[i]!='\0';i++) length++;
    return length;
}
int main(){
    int n;cin >> n;
    char str[100][42];
    int length[100];
    char (*p)[42] = str;
    for(int i=0;i<n;p++,i++){
        cin>>*p;
        length[i] = length_of(*p);}
    // while(cin>>*p) p++;
    p=str;
    int i = 0, current=0;
    while(i<n){
        int line_len = 0;
        while (i<n)
        {
            line_len += length[i] + 1;
            // cout << "current word = " << str[i] << " line_len= " << line_len << endl;
            if(line_len > 81){
                i--;
                // cout << line_len << endl;
                break;
            }
            i++;
        }
        if(i==n) i--;
        // cout << i << endl;
        for(int i2=current;i2<i;i2++) cout << str[i2] << ' ';
        cout << str[i] << endl;
        i++;
        current = i;
    }
    
    // for(int i=0;i<n;p++,i++) cout << *p << ' ' << length_of(*p) << endl;

    return 0;
}