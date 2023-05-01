#include<stdio.h>

int main ()
{
    int x;
    scanf("%d", &x);

    printf("Memory address of x ---> %d\n", &x);

    int* p = &x; // pointer assigns memory address of a variable.
    printf("Memory address of x using pointer ---> %d\n", p);

    //de-referencing 
    printf("Value of x using pointer ---> %d\n", *p);

    *p = 500;
    printf("Value of x Now ---> %d\n", *p);

    return 0;
}