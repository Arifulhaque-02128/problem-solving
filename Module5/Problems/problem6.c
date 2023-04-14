#include<stdio.h>

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //min

    if (a<=b)
    {
        if (a<=c)
        {
            printf("%d ", a);
        } else {
            printf("%d ", c);
        }
        
    }
    else if (b<=c)
    {
        printf("%d ", b);
    } else {
        printf("%d ", c);
    }



    //max
    if (a>=b)
    {
        if (a>=c)
        {
            printf("%d\n", a);
        } else {
            printf("%d\n", c);
        }
        
    }
    else if (b>=c)
    {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }
    
    
    return 0;
}