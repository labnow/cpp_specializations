#include <iostream>

using namespace std;

int main(){
    int n = 6;
    // cin >> n;
    int maxOdd = 0, minEven = 100;
    while(n>0){
        int temp;
        cin >> temp;
        if(temp%2 == 0 && temp < minEven){
            minEven = temp;
        }else if(temp%2==1&&temp>maxOdd){
            maxOdd = temp;
        }
        n--;
    }
    int result;
    result = maxOdd - minEven;
    result = (result > 0)?result:-result;
    cout << result <<endl;
    return 0;
}