#include<stdio.h>
void print_divisors(int x){
  for(int i=1;i<x;i++){
    if(x%i==0){
        printf("%d\n",i);
    }
  }
}
int main()
{
print_divisors(10);
return 0;
}