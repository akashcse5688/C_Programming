#include<stdio.h>
int main()
{
  int a[3][4],trans[3][4];

   for(int i=0;i<3;i++)

    {

    for(int j=0;j<4;j++)

     {
         printf("[%d][%d]= ",i,j);
         scanf("%d",&a[i][j]);
     }


     printf("\n");

    }


     for(int i=0;i<3;i++)

    {

    for(int j=0;j<4;j++)

     {
         printf("%d\t",a[i][j]);

     }


     printf("\n");

    }



for(int i=0;i<3;i++)

    {

    for(int j=0;j<4;j++)

     {
         trans[j][i]=a[i][j];
     }



    }



for(int i=0;i<4;i++)

    {

    for(int j=0;j<3;j++)

     {
         printf("%d",trans[i][j]);
     }



    }


    return 0;
}
