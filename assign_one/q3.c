#include<stdio.h>
int main()
{
 int  i, a[20];
 int Even_Count = 0; 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < 20; i++)
 {
   scanf("%d", &a[i]);
 }
 for(i = 0; i < 20; i ++)
 {
   if(a[i] % 2 == 0)
   {
     Even_Count++;
   }
 }
 printf("\n Total Number of Even Numbers in this Array = %d ", Even_Count);
 return 0;
}
