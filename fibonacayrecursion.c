#include<stdio.h>
int fibo(int n){
if (n==1){
    return 1;
}
else if(n==0){
    return 0;

}
else 
return fibo(n-1)+fibo(n-2);


}







int main(){

int i,n,f;
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    f=fibo(i);
    printf("%d\n",f);
}


}