#include<stdio.h>
int main()
{
int a[100];
int n;
printf("Enter N=  ");
scanf("%d",&n);
for(int i=1;i<=10;i++)
{
    scanf("%d",&a[i]);
}
for(int i=10;i>=1;i--)
{
    printf("%d\t",a[i]);
}
return 0;
}