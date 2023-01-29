#include<stdio.h>
int main()
{
char ch[100];
gets(ch);
int i,count=0;

    while(ch[i]!='\0')

    {
       if ((ch[i]>= 'a' && ch[i]<= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
        i++;
        count++;
    }

printf("%d",count);
}
