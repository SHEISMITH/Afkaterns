#include <stdio.h>

long fact(int size)
{
   int a;
   long mul = 1;
   for (a= 1; a<= size; a++)
  mul = mul*a;
  return mul;
}
 int main()
 {
   int i, size, a;
   printf("Enter the number of rows \n");
   scanf("%d",&size);
   for (i = 0; i < size; i++)
   {
     for (a = 0; a <= (size - i - 2); a++)
         printf(" ");
     for (a = 0 ; a <= i; a++)
         printf("%ld ",fact(i)/(fact(a)*fact(i-a)));
      printf("\n");
   }
 
  return 0;
 }
 

