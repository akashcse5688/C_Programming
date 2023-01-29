#include<stdio.h>
int main(){

int a[100];
int n,scarch,located=0;
printf("entter your array size= " );
scanf("%d",&n);
printf("enter your scarch value= ");
scanf("%d",&scarch);

for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i < n; i++)
{
if(scarch==a[i])
located=i+1;


}
printf("%d position ",located);

















}