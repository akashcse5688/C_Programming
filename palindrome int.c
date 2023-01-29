#include<stdio.h>
int main()
{
 int n,r,temp,sum=0;
 scanf("%d",&n);
 temp=n;
  while(temp!=0)
    {
      r=temp%10;
      sum=sum*10+r;
      temp=temp/10;
    }

    if(sum==n)
{
    printf("P");
}
else
{
    printf("np");
}


}
