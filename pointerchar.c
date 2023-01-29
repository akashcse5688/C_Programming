#include<stdio.h>
int main(){
int x=10,y=23,z=33;
int *a=&x;
int *b=&y;
int *c=&z;
int zum=*a+*b+*c;
printf("%d\n",zum);

}