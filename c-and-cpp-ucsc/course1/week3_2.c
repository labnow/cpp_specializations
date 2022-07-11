#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double step = 10;
double interval = 1/step;
for(double i = 0; i < 1; i+=interval)
{
    printf("sin( %lf ) = %lf\tcos( %lf ) = %lf\n", i, sin(i), i, cos(i));
}

printf("\n+++++++\n");
return 0;
}