#include <stdio.h>
#include <math.h>


int main(void) { 
    
    double  n,sinn,cosn;
    
    scanf("%lf", &n);
    
    if(n < 360)
    {
    sinn = sin(n);
    cosn = cos(n);
    printf("The sin(%lf) value is: %lf\n", n,sinn);
    printf("The cos(%lf) value is: %lf\n", n,cosn);
    }
    else
    {
    printf("Input shouble be less than 360.");
    }
    
	return 0;
}
