#include<stdio.h>

void swap_it(int *a, int *b){

    // printf("Address of A and B - %p %p\n", a, b);
    // printf("Value of A and B - %d %d\n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *p_a = &a;
    int *p_b = &b;

    swap_it(p_a, p_b);

    printf("%d %d\n", a, b);

    return 0;
}


// input ---> 18 27