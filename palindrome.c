#include<stdio.h>
int main()
{
    char ch[45];
    char ch1[40];
    gets(ch);
    int i=0,j,len=0;
    while(ch[i]!='\0')
 {
  i++;
  len++;
 }

 for(j=0,i=len-1;i>=0;i--,j++)

 {
     ch1[j]=ch[i];
 }

 ch1[j]!='\0';


printf("ch =%s\n",ch);
printf("ch1=%s\n",ch1);
int d=strcmp(ch,ch1);
if(d==0)
{
    printf("palindrome");
}
else{
 printf("not palindrome");
}



}

