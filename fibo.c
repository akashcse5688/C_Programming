#include<stdio.h>
int main()
{
  int N,d1=0,d2=1,fibo;
   printf("Enter N= ");
   scanf("%d",&N);
    fibo=d1+d2;
printf("%d%d",d1,d2);
    for(int i=3;i<N;i++)

    {

printf("%d",fibo);
d1=d2;
d2=fibo;
fibo=d1+d1;

    }










    return 0;
}
