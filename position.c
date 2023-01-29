#include<stdio.h>
int main()
{
int seen[10]={0};
int n,rem;
printf("Enter value of n=");
scanf("%d",&n);
while(n>0){
rem=n%2;
if(seen[rem]==1)
break;
seen[rem]=1;
n=n/10;
}

if(n>0){
    printf("it found");
}
else
{
    printf("not found");
}
}
