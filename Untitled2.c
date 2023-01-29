#include<stdio.h>
#include<string.h>


int main()
{


char ch[500];
gets(ch);
//for(int i=0;i<strlen(ch);i++)
//{
    //printf("%c\n",ch[i]);
//}
int len=strlen(ch);
printf("%c",ch[len-1]);
}
