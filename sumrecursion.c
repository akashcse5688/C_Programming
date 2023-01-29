#include<stdio.h>
int sum(int n){
if(n==1){
    return 1;
}
else{
   return n+sum(n-1);
}

}
int main()
{
int n;
printf("Enter a number = ");
scanf("%d",&n);
printf("sum number is = %d ",sum(n));
return 0;




}