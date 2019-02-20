#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,a,b,c,d,i;
	
	
	for(i = 100; i < 1000; i ++)
	{
	num = i;
	a = num / 100;
	b = (num % 100) / 10;
	c = num % 10;
	
	d = a*a*a + b*b*b + c*c*c;
	
	if(num == d)
	    printf("%d is a daffodil number.\n", num);
	}

	
	return 0;
}
