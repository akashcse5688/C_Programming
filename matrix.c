#include<stdio.h>
int main()
{
  int a[3][4];

   for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
         {
    printf("a[%d][%d]= ",a[i][j]);
    scanf("%d",&a[i][j]);
         }
printf("\n");



    }

for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
         {
    printf("%d",a[i][j]);
         }
printf("\n");



    }











}
