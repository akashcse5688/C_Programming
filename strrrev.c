#include<stdio.h>

int main()
{
char ch[100];
gets(ch);
strrev(ch);
printf("reverse number is = %s",ch);
}