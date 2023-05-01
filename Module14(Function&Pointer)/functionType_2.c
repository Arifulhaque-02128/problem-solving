// return + no parameter

#include<stdio.h>


// void ---> function will take no parameter. If you give parameter, it will give error.
int add(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    return sum;
}

int main ()
{

    int sum = add();

    printf("%d", sum);
    
    return 0;
}


// input ---> 32 13