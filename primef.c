#include<stdio.h>
void prime(int x){
    int count=0;
    for (int  i = 2; i < (x-1); i++)
    {
        if(X%i==0){
           ++count;
        }
    }
    if(count==0){
        printf("prime na")
    }
    else{
   printf("prie");
    }
    
}
int main(){
    printf("%d is",prime(5));
}