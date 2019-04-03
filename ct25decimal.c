#include<stdio.h>

int main(void)
{
    int c;
    float a,b;
    
    
    while(1)
    {
    scanf("%f %f %d", &a, &b, &c);
    if((a > 0) && (b > 0) && (c > 0) && (a <= 1000000) && (b <= 1000000) && (c <= 100))
       printf("%.*lf\n", c, (a/b));
    else if((a == 0) && (b == 0) && (c == 0))
    break;
    }
    
    return 0;
}











