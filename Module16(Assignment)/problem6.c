#include<stdio.h>

void pass_by_value(int n){
    n = n + 10;
    printf("Value of n in pass_by_value function - %d\n", n);
}

void pass_by_reference(int *n){
    *n = *n + 10;
    printf("Value of n in pass_by_reference function - %d\n", *n);
}

int main ()
{
    int n;
    scanf("%d", &n);

    int *ptr = &n;

    printf("Value of n in main function, before passing - %d\n", n);

    pass_by_reference(ptr);

    printf("Value of n in main function, after passing - %d\n", n);


    return 0;
}