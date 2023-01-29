#include<stdio.h>
int main()
{
  int blance,callrate,miniute;

    scanf("%d%d%d",&blance,&callrate,&miniute);
    if(blance>=callrate*miniute)
    {
        printf("call");
    }
    else
    {
        printf("recharge");
    }





    return 0;
}
