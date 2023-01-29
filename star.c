#include<stdio.h>
int main()
{
int n;
printf("Enter value of N= ");
scanf("%d",&n);
for(int row=1;row<=n;row++)
{
  for(int col=1;col<=n-row;col++)
  {
    printf("  ");
  } 
for(int col=1;col<=2*row-1;col++){
    printf(" * ");
}
    printf("\n");
}
}
 
