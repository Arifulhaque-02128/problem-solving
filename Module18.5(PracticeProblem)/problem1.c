#include<stdio.h>

void print(int i){

    if(i == 0) return;

    printf("I love Recursion\n");

    print(i-1);
}

int main ()
{
    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}

// input ---> 3