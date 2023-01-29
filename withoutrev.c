#include<stdio.h>
#include<string.h>
int main()
{
char ch[122];
char ch1[200];
int len,i,j;
gets(ch);
len=strlen(ch);
for(int i=(len),j=0;i>=1,j!='\0';i--,j++){
ch1[j]=ch[i];
    
}
printf("%s\n",ch);
printf("%s",ch1);




}