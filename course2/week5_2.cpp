#include <iostream>
using namespace std;
int main(){
    int row, col; cin >> row >> col;
    int a[100][100];
    int *p = *a;
    for(int i=0;i<col*row;i++) cin >> *(p + (i/col)*100 + i%col);
    for(int i =0;i<col+row-1;i++){
        // do_sth(a, row, col);
        int t_row = 0, t_col = i;
        // while(t_row<=row, t_col<=col)
        // for()
        while(t_col>=0){
            if(t_row<row&&t_col<col) cout << a[t_row][t_col] << endl;
            t_row++;
            t_col--;
        }
    }
    return 0;
}
