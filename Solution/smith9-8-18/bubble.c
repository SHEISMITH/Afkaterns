#include <stdio.h>

int main()
{
 int n;
 int a[5000];
 int i,j;
 int temp;
  printf("enter array size :");
  scanf("%d",&n);
  for (i=0;i<n;i++)
   {
   printf("enter the array elements ");
   scanf("%d",&a[i]);
   }  
   printf("the array is : ");
  for (i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
  {
   if (a[i] > a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
   }
   }
   for(i=0;i<n;i++){
  printf("%d",a[i]);
}
   
  return 0;
  }
