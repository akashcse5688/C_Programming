//litu Ahamed Nerob
// 221-33-1534
int main()
{
 int Size, i, a[10];
 int Even_Sum = 0, Odd_Sum = 0;


 printf(" Enter the Array Elements\n");
 for(i = 0; i < 10; i++)
 {
      scanf("%d", &a[i]);
 }

 for(i = 0; i < 10; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }

 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
 return 0;
}
