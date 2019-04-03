#include<stdio.h>

int main(void)
{
    int x,a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    for(x = 10; x <= 100; x ++)
    {
        if((x%3 == a) && (x%5 == b) && (x%7 == c))
          break;
    }
    
    if(x <= 100)
      printf("%d\n", x);
    else
      printf("No answer\n");
    
    
    return 0;
}





