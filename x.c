#include<stdio.h>
int main( )
{
int a = 100 ;
for(int i=1, j= 2;( i * j ) < a;i += 2, j += 3)
printf ("%d\t%d\t%d \n ", a --,j,i);
return 0 ;
}
