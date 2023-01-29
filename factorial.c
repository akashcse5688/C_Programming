#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=10;i=i+2)
    {
        printf("%d x %d=%d\n",i,n,i*n);
    }
}

