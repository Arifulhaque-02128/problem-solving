#include<stdio.h>
#include<string.h>

int main ()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);
    printf("%d\n", val);

    if (val>0)
    {
        printf("b(%s) is smaller than a(%s)\n", b, a);
    }
    else if (val<0)
    {
        printf("a(%s) is smaller than b(%s)\n", a, b);
    }
    else
    {
        printf("a and b is same\n");
    }
    


    return 0;
}