#include<stdio.h>
int main()
{
   int n,count=0;
   scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0);
        count++;
        break;
    }

   if(count==0)
   {


    printf("prime number=");
   }

  else
  {
      printf("not prime number");
  }





}
