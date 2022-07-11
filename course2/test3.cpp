#include <iostream>
#include<typeinfo>
using namespace std;
int b = 2;

int func(int *a){

    b += *a;

    return b;

}

int main( ){ 

char a[] = "hollo,world";
// &(a+1) = 'e';
char *p = a;
p++;
*p='e';
cout << a << endl;

}
