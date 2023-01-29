#include<stdio.h>
int main()
{
 int X,Y,max,min,sum=0;

  scanf("%d %d",&X,&Y);

   if(X>Y)
   {
    max=X;
    min=Y;
   }
    else if(Y>X)
    {
    max=Y;
    min=X;
    }
    for(int i=min+1;i<max;i++)
    {

            if(i%2!=0)
            sum=sum+i;


printf(" sum=%d\n",sum);
    }












    return 0;
}







