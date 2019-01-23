#include<stdio.h>

int main()
{
 int n, count = 0;
 scanf("%d", &n);
 
  while(n > 1)
  {
   if(n % 2 == 1)
   {
     n = n *3 + 1;
     printf("3n+1 = %d\n", n);
   }
   else
   {
     n = n/2;
     printf("n/2 = %d\n", n);
   }
   count ++;
  }
  
  printf("%d\n", count);
  
 return 0;
}
