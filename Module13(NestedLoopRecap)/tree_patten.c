#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int k=(2*n)-1; 
    int space = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        k=k-2;
        space++;

        printf("\n");
        
        
    }
    
    return 0;
}