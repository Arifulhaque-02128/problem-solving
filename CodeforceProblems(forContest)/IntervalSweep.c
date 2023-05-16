#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int diff = abs(a-b);

    if (a == 0 && b == 0)
    {
        printf("NO\n");
    }

    else if (diff == 1 || diff == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}



// input ----> 2 3 or 3 1