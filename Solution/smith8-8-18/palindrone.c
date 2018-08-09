#include<stdio.h>
 
int main()
{
 int n,reverse=0;
 int temp=0;
 printf ("enter the number");
 scanf("%d",&n);
  temp==n;
  while (n != 0)
{
 reverse = reverse * 10 + n%10;
 n       = n/10;
}
 printf("the reverse is :%d\n",reverse);
 temp=n;
 if (reverse==n)
{
 printf("the number is  palindrone");
}
else if (reverse!=n )
{
 printf("the number not palindrone");
}
 return 0;

}



