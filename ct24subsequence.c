#include<stdio.h>

int main(void)
{
    int n,m;
    float i,sum;
    
    
    while(1)
    {
    	sum = 0;
    scanf("%d %d", &n, &m);
    if((n > 0) && (m > 0) && (n < m ) && (m < 1000000))
    {
       for(i = n; i <= m; i ++) 
         sum += 1/(i * i);
         
       printf("%.5f\n", sum);
    }
    else if((n == 0) && (m == 0))
    break;
    }
    
    return 0;
}











