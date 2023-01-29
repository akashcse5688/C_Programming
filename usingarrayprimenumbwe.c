#include<stdio.h>
#include<string.h>
int main()
{
char id[100];
gets(id);
for(int i=0;i<=strlen(id);i++)
{
    if(id[i]=='2'||id[i]=='3'||id[i]=='5'||id[i]=='7')
    printf("%c idis a prime nnumber\n",id[i]);
}

}