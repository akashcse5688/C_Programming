#include<stdio.h>
void sum(int *x,int *y){
    *x=12;
    *y=23;
    printf("x=%d\n and y=%d\n",*x,*y);

}
void main(){
    int x=12;
    int y=4;
    sum(&x,&y);
  printf("x=%d\n and y=%d\n",x,y);

}