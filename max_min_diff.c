#include<stdio.h>
int main()
{
int a[100];
int max,min,n;
printf("Enter N= ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(int i=0;i<n;i++)
{
   if(max<a[i])
   {
    max=a[i];
   } 
}
min=a[0];
for(int i=0;i<n;i++)
{
   if(min>a[i])
   {
    min=a[i];
   } 
}
printf("Maximum value is= %d\n",max);
printf("Difrence of minimum and maximum=%d",max-min);
printf("minimum value is =%d\n",min);
}