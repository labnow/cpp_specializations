#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int n =3;
    double id_sum[3];
    double type_sum[3];
    int i =0;
    while(i<3){
        int id, num;
        cin >> id >> num;
        while(num>0)
        {   
            char type; double price;
            cin >> type >> price;
            id_sum[i] += price;
            switch (type)
            {
            case 'A': type_sum[0] += price; break;
            case 'B': type_sum[1] += price; break;
            case 'C': type_sum[2] += price; break;
            default: break;
            } 
            num--;
        }
        i++;
    }
    cout << fixed << setprecision(2);
    cout << 1 << ' ' << id_sum[0] << endl;
    cout << 2 << ' ' << id_sum[1] << endl;
    cout << 3 << ' ' << id_sum[2] << endl;
    cout << 'A' << ' ' << type_sum[0] << endl;
    cout << 'B' << ' ' << type_sum[1] << endl;
    cout << 'C' << ' ' << type_sum[2] << endl;
    return 0;
}