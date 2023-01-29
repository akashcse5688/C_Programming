#include<stdio.h>
#include<string.h>
int main(){
int len1,len2,i;
char s1[100]="akash";
char s2[255]="lovebangladesh";
len1=strlen(s1);

for ( i = 0; i <= strlen(s2);i++)
{
   s1[len1+i]=s2[i];
}

printf("%s\n",s1);



}