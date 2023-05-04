#include<stdio.h>

int my_abs(int x){

    int val;

    if (x < 0)
    {
        return (x*(-1));
    } else {
        return x;
    }
    
}

int main ()
{
    int x;
    scanf("%d", &x);

    int abs_value = my_abs(x);

    printf("%d", abs_value);

    return 0;
}


// input ---:> -7 or 6 or 0