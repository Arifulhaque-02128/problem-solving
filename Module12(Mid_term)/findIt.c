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

    int x;
    scanf("%d\n", &x);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cnt++;
        }
        
    }
    

    printf("%d\n", cnt);

    
    return 0;
}