#include<stdio.h>
void push(){
    if(top==4){
printf("over flow\n");
    }
    else{
printf("Enter value in your stack= ");
int x;
scanf("%d",&x);
top=top+1;
stack[top]=x;
    }
}
void pop(){
if(top==-1)
{
    printf("Under flow");
}
else{
    printf("%d",stack[top]);
    top--;
}
}
void display(){
if (top==-1){
    printf("EMPTY");

}
else {
    for(int i=0;i<=top;i++){
        printf("%d",stack[top]);
    }
}
}
void reverse(){
    if (top==-1){
    printf("EMPTY");

}
else {
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
}  