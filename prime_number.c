#include<stdio.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);

for(int i=2;i<=(n-1);i++)
{
    if(n%i==0)
    {
        ++count;
        break;
    }
    
}

if(count==0)
{
    printf("Prime number ");
}
else
{
    printf("Not prime");

}


    return 0;
}
