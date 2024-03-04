#include<stdio.h>
#include<stdlib.h>
struct str
{
    int a;
    float b;
    char c[1];
};


int main(){
    struct str s;
    //fill s
    printf("Enter an integer: ");
    scanf("%d", &s.a);
    printf("Enter a float: ");
    scanf("%f", &s.b);
    printf("Enter a character: ");
    scanf("%s", &s.c);
    //print all values of s
    printf("\n%d", s.a);
    printf("\n%f", s.b);
    printf("\n%s", s.c);
   return 0;
}