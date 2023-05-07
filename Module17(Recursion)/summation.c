#include<stdio.h>

int summation(int i){
    if(i==0) return 0;

    int sum = summation(i-1);

    return sum + i;
}

int main ()
{
    int n;
    scanf("%d", &n);

    int sum = summation(n);

    printf("sum : %d\n", sum);

    return 0;
}