#include <stdio.h>



int main(void) { 
    
    int  eage1, eage2, eage3;
    
    scanf("%d%d%d", &eage1, &eage2, &eage3);

    
    if((eage1 + eage2 > eage3) && (eage1 + eage3 > eage2) && (eage1 + eage2 > eage3)
       && (eage1 > 0) && (eage2 > 0) && (eage3 > 0))
    {
    if((eage1 * eage1 + eage2 * eage2 == eage3 * eage3) || (eage3 * eage3 + eage2 * eage2 == eage1 * eage1)
        || (eage1 * eage1 + eage3 * eage3 == eage2 * eage2))
        printf("yes\n");
    else
        printf("no\n");
    }
    else
        printf("not  a triangle\n");

	return 0;
}
