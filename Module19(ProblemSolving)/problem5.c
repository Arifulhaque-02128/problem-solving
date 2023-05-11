#include<stdio.h>

long long int getFactorial(int n){

    if(n==0) return 1;

    long long int fact = getFactorial(n-1);

    return n*fact;
}

int main ()
{
    int n;
    scanf("%d", &n);

    long long int fact = getFactorial(n);

    printf("%lld\n", fact);

    return 0;
}


// input -----> 5