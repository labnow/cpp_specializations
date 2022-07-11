#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define times 1000000
void main()
{
    int a;
    int a_array[times] = {0};
    int occurence[13] = {0};
    srand((unsigned)time(NULL));
    for(int i = 0; i < times; i++)
        a_array[i] = rand() % 13 + 1;
    // compute occurence
    for(int i = 0; i < times; i++)
        occurence[--a_array[i]]++;
    for(int i = 0; i < 13; i++)
        printf("%d\t", occurence[i]);

    
}