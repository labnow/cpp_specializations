#include <iostream>

using namespace std;

int main(){
    int h, r;
    cin >> h >> r;
    const float pi = 3.14159;
    float vol;
    vol = pi*r*r*h;
    // 20 l = 20,000 ml = 20,000 cm^3
    int n;
    float temp;
    temp = 20000/vol;
    n = (temp==int(temp))?temp:temp+1;
    cout << n;
    return 0;
}