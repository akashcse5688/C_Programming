#include<stdio.h>
int odd(int n){
if(n==0){
    return 0;

}
else{
    return n+odd(n-2);
}


}
int main()
{
int n;
printf("enter a number = ");
scanf("%d",&n);
printf("ODD NUMBER IS =%d",odd(n));
return 0;
}