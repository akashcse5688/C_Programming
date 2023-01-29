#include<stdio.h>
#include<string.h>
int main()
{
char ch[500];
printf("Enter your id= ");
gets(ch);
int len =strlen(ch);
printf(" your last digit= %c\n",ch[len-1]);

}
