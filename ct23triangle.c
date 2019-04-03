#include<stdio.h>

int main(void)
{
    int n,i,j;
    
    char blank = ' ';
    char sharp = '#';
    
    scanf("%d", &n);
    
    if(n <= 20)
    {
        for(i = 0;i < n;i++)
        {
            j = i;
            while(j --)
            printf("%c", blank);
            j = 2*n - 2*i - 1;
            while(j --)
            printf("%c", sharp);
            printf("\n");
            
        }
        
    }
    
    
    return 0;
}
