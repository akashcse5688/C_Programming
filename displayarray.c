#include<stdio.h>
void array(int akash[5]){
    int sum=0;
    for (int  i = 0; i < 5; i++)
    {
        sum=sum+akash[i];
    }
    printf("your sum is = %d\n",sum);
}
    int main(){
        int num[5]={1,2,3,4,5};
        array(num);
    }
    

