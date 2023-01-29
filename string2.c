#include<stdio.h>
void display(int x[5]){
    for (int i = 0; i < 5; i++)
    {
       printf("%d\n",x[i]);
    }
    
}
int main(){
    int a[5]=(12,3,4,3,2);
    display(a[5]);
}
int