#include<stdio.h>
int avg (int x,int y,int z){
 int avg=(x+y+y)/3;
 return avg;
}
int main(){
    int result=avg(10,10,10);
    printf("Your avarage value = %d\n",result);   
}