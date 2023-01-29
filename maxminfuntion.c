#include<stdio.h>
int maxmin(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
void main(){
int number1,number2,mainresult;
printf("Enter two number ");
scanf("%d%d",&number1,&number2);
mainresult=maxmin(number1,number2);
printf("%d is big number ",mainresult);
}