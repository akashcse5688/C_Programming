#include<stdio.h>
#include<string.h>
int main()
{
int flag=0;
char ch[100]="akash";
char ch1[100]="akash";
int i=0;
for(int i=0;ch[i]!='\0'||ch1[i]!='\0';i++){

if(ch[i]!=ch1[i]){
    flag=1;
    break;
    
}



}

if(flag==1){
    printf("posible");
}

else{
    printf("not posible");
}
}