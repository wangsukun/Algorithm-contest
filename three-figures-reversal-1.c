#include <stdio.h>

//if scanf 430, the result will be 034, please see the file three-figures-reversal-2.c

int main(void) { 
	int n;
	
	scanf("%d", &n);
	printf("%d%d%d\n", n%10, n/10%10, n/100);
	
	return 0;
}
