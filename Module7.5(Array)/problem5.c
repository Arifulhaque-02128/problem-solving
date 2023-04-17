#include<stdio.h>
#include <limits.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowestNum = INT_MAX;
    int position = -1;
    

    for (int j = 0; j < n; j++)
    {
        if (arr[j]<lowestNum)
        {
            lowestNum = arr[j];
            position = j;
        }
        
    }

    printf("%d %d", lowestNum, position+1 );
    
    
    return 0;
}