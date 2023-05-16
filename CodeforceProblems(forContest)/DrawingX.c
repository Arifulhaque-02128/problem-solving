#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int backSlash = 0, slash = n-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==slash)
            {
                if (slash == backSlash)
                {
                    printf("X");
                }
                else
                {
                    printf("/");
                }
            }
            else if (j == backSlash)
            {
                printf("\\");
            } else {
                printf("*");
            }
        }
        printf("\n");
        backSlash++;
        slash--;
    }
    
    return 0;
}

// input ----> 5 or 7