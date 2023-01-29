#include<stdio.h>
int akash(int a,int b)
{
int area;
area=a*b;
return area;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int *c=&a;
    int *d=&b;
    int len=akash(*c,*d);
    printf("%d\n",len);
}