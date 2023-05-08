#include<stdio.h>

void printNumber(int i, int n){

    if(i > n) return;

    printf("%d\n", i);

    printNumber(i+1, n);
}

int main ()
{
    int n;
    scanf("%d", &n);

    printNumber(1, n);

    return 0;
}


// input ---> 5