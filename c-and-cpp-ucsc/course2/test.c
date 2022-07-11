#include<stdio.h>
typedef enum choices {left, left_center = 2, right_center, right = 5} choices;
int main()
{
    printf("%d\n", left);
    printf("%d\n", right_center);

   return 0;
}
/*
1
1
0
0
1
1
0
1
56
6
*/