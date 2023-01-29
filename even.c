#include<stdio.h>
void even_or_odd(int x){
    if(x%2==0){
        printf(" EVEN");
    }
else{
    printf("ODD");
}
}
int main()
{
even_or_odd(11);
return 0;
}
