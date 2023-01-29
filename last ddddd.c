#include<stdio.h>
#include<string.h>
int main()
{
char ch[500];
gets(ch);
int len =strlen(ch);
printf("%c\n",ch[len-1]);




}
