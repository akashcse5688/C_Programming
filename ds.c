#include<stdio.h>
int main()
{
  int n,row,col;

  scanf("%d",&n);
  for(int row=1;row<=n;row++)
    {

      for(int col=1;col<=n;col++)

      {
          if(row==col||row+col==n+1||row==n||row==1){
            printf(" *");


          }
          else
          {
              printf(" ");
          }
      }




     printf("\n");
    }

















    return 0;

}
