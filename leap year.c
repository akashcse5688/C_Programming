#include<stdio.h>
int main()
{
    int a,b,c,year;
    printf("input year =");
    scanf("%d",&year);
    a=year%4==0;
    b=year%100!=0;
    c=year%400==0;
    if(a==0&&b!=0 ||c==0)
        printf("leap year");
    else
        printf("not leap year");
}
