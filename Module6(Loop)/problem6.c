#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d\n", &a);
        int rem;
        if (a == 0)
        {
            printf("0 ");
        }
        
        while (a>0)
        {
            rem = a%10;
            printf("%d ", rem);
            a = a/10;
        }
        printf("\n");
        
        
    }
    
    return 0;
}