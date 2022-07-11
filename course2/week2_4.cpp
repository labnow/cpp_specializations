#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // char day[11]; cin >> day;
    int year, month, day;
    char tmp;
    bool leap_yeae = false;
    int month_normal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month_leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    cin >> year >> tmp >> month >> tmp >> day;
    if(!(year%100==0&&year%400!=0)&&(year%3200!=0)&&year%4==0) leap_yeae = true;
    if(month==12&&day==31){ year++; month=1; day=1;}
    else{
        if(leap_yeae){
            if(day<month_leap[month-1]) day++;
            else{
                month++; month%=12;
                day = 1;
            }
        }
        else{
            if(day<month_normal[month-1]) day++;
            else{
                month++; month%=12;
                day = 1;
            }
        }}
    cout  << year << '-' << setfill('0') << setw(2) << month << '-' << setw(2) << day << endl;
    return 0;
}