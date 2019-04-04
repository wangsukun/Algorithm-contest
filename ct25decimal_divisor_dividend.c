#include<stdio.h>

int main(void)
{
   
    float a,b;
    
	printf("Please Enter the divisor and dividend:") ;   
    scanf("%f %f", &a, &b);
    
       printf("The Result is : %.3f\n",  (a/b));
      
    return 0;
}
