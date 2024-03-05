#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};
//calculate days from the turn of century:
int days(int d, int m, int y){
    return (d + m*30 + y*360) - 720391;
}

int main(){
    struct date d;
    //fill d
    printf("Enter the day: ");
    scanf("%d", &d.day);
    printf("Enter the month: ");
    scanf("%d", &d.month);
    printf("Enter the year: ");
    scanf("%d", &d.year);
    printf("%d", days(d.day, d.month, d.year));
   return 0;
}