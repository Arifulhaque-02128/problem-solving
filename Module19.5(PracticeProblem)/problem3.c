#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }
    
    return 0;
}


// input ---> 3
// 10 10
// 13 200
// 300 300