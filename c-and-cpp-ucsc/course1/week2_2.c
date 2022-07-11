/* program that prints the sine function for an input x between (0, 1) */
#include <stdio.h>
#include <math.h>

int main()
{
    double input;
    
    printf("Enter input value:");
    scanf("%lf", &input);

    if(input > 0 && input < 1)
    {
        printf("sin(%.2lf) = %.2lf\n", input, sin(input));
    }
    else
    {
        printf("input %.2lf not in range (0,1)\n", input);
    }
    return 0;
}