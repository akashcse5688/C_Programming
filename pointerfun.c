#include<stdio.h>
void sum(int *x,int *y){
    *x=12;
    *y=4;
    int sum=*x+*y;
    printf("%d\n",sum);
}
void main(){
    int x=19,y=20;
    sum(&x,&y);
}