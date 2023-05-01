#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int space= n-1, k=1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < k ; j++)
        {
            printf("*");
        }

        space--;
        k=k+2;

        printf("\n");
        
        
    }
    
    return 0;
}