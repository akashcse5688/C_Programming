#include<stdio.h>
int avg(int marks[],int a){
int sum=0,avarage;
for(int i=0;i<a;i++){
    sum=sum+marks[i];

}
avarage=sum/3;
return avarage;

}
void main(){
int marks[]={1,2,3,4,54,5,6};
int avarage=avg(marks,7);
printf("%d\n",avarage);


}