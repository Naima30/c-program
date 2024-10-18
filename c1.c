#include <stdio.h>
int main() 
{
    int n, coef = 1,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        
        for (j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }
        
        
        coef = 1; 
        for (j = 0; j <= i; j++)
         {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1); 
         }
        printf("\n");
    }
    
    return 0;
}
