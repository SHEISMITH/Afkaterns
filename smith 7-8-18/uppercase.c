#include<stdio.h>
 
int main() {
   int up = 0, lower = 0;
   char ch[1000000];
   int i;
   int size;
  
   printf("\nEnter The Sentence : ");
    scanf("%s",&ch[1000000]);
   i = 0;
   while (ch[i] != ' ') {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         up++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }
 
   printf("Uppercase :%d",up);
   printf("Lowercase : %d",lower);
   return (0);
}
