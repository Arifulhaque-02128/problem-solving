#include<stdio.h>
#include<limits.h>

int main ()
{
    int n;
    scanf("%d\n", &n);
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d ", &a);
        if (a>maximum)
        {
            maximum = a;
        }
        
    }

    printf("%d\n", maximum);
    
    return 0;
}