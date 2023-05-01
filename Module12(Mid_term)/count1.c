#include<stdio.h>

int main ()
{
    int n;
    scanf("%d\n", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int countEven = 0, countOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            countEven++ ;  
        }
        else
        {
            countOdd++ ;
        }
        
    }

    printf("%d %d\n", countEven, countOdd);
     
    return 0;
}