#include <stdio.h>
#include <math.h>


int main(void) { 
    
    int  num, price, discountSum;
    float discount, sum;
    
    price = 95;
    discount = 0.85;
    discountSum = 300;
    
    
    scanf("%d", &num);
    
    sum = num * price;
    
    if(sum >= discountSum)
        sum = num * price * discount;
    printf("The pay is %.2f.", sum);
    
	return 0;
}
