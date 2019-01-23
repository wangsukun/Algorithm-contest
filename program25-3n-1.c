#include<stdio.h>

int main()
{
 int n1, count = 0;
 scanf("%d", &n1);
 
 long long n = n1;
 
  while(n > 1)
  {
   if(n % 2 == 1)
   {
     n = n *3 + 1;
     printf("3n+1 = %lld\n", n);
   }
   else
   {
     n = n/2;
     printf("n/2 = %lld\n", n);
   }
   count ++;
  }
  
  printf("%d\n", count);
  
 return 0;
}
