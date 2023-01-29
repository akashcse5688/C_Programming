#include<stdio.h>
int main()
{
 int x=10;
 int *ptr;
 ptr=&x;
 
 printf("Value of x=%d\n",x);
 printf("Value of x=%d\n",*ptr);
 printf("Value of x=%d\n",&x);

}
