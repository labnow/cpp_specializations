/*week2 assignement: option 1*/
#include<stdio.h>
typedef enum month{January, February, March, April, May, June, July, August, September, October, November, December} month;
int max_month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
typedef struct date{ month m; int d;} date;

void next_day(date* date)
{
    if(date->d < max_month_day[date->m])
        date->d++;
    else
    {
        date->m = (date->m + 1) % 12;
        date->d = 1;
    }
}

void printdate(date* date)
{   
    switch (date->m)
    {
        case January: printf("%s %d\n", "January", date->d); break;
        case February: printf("%s %d\n", "February", date->d); break;
        case March: printf("%s %d\n", "March", date->d); break;
        case April: printf("%s %d\n", "April", date->d); break;
        case May: printf("%s %d\n", "May", date->d); break;
        case June: printf("%s %d\n", "June", date->d); break;
        case July: printf("%s %d\n", "July", date->d); break;
        case August: printf("%s %d\n", "August", date->d); break;
        case September: printf("%s %d\n", "September", date->d); break;
        case October: printf("%s %d\n", "October", date->d); break;
        case November: printf("%s %d\n", "November", date->d); break;
        case December: printf("%s %d\n", "December", date->d); break;
        default: printf("%d", date->m);
    }
}

int main()
{    
    date my_date = {January, 1};
    printdate(&my_date); next_day(&my_date); printdate(&my_date);
    my_date.m = February; my_date.d = 28;
    printdate(&my_date); next_day(&my_date); printdate(&my_date);
    my_date.m = March; my_date.d = 14;
    printdate(&my_date); next_day(&my_date); printdate(&my_date);
    my_date.m = October; my_date.d = 31;
    printdate(&my_date); next_day(&my_date); printdate(&my_date);
    my_date.m = December; my_date.d = 31;
    printdate(&my_date); next_day(&my_date); printdate(&my_date);
    return 0;
}