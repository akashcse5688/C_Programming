
//NO ARGUMENTS PASS NO RETURN VALUE;
#include<stdio.h>
void add1(){
    int x=10,y=20;
    int result=x+y;
    printf("sum1 is =%d\n",result);
}
// ARGUMENT PASS BUT NO RETURN VALUE;
int add2(int x,int y){
    int result=x+y;
    printf("sum2 is =%d\n",result);
}
// NO ARGUNMENT BUT RETURN VALUE;
int add3(){
    int x=10,y=20;
    int result=x+y;
   return result;
}
// ARGUMENT AND RETURN VALUE;
int add4(int x,int y){
    int result=x+y;
   return result;
}
int main()
{
    add1();
    add2(12,23);
    printf("sum3 is= %d\n",add3());
     printf("sum4 is= %d\n",add4(23,35));
}
