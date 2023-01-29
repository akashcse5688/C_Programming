#include<stdio.h>
int sumpalidrome(int n)
{

if(n==0){
    return 0;
}
else{
    return(( n%10)+sumpalidrome(n/10));
}
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",sumpalidrome(n));
return 0;
}