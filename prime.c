#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter a number= ");
scanf("%d",&n);
for(int i=2;i<=n-1;i++)
{
    if(n%2==0)
    {
        ++count;
    }

}
if(count==0)
{
    printf("%d is a Prime number",n);
}
else
printf("%d is not a Prime number",n);

}