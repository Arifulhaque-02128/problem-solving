// NO return + NO parameter

#include<stdio.h>


void add(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a+b;

    printf("%d", sum);

    return;
}

int main ()
{
    // add() ---> will not return any value. So, it cant be stored into a variable.
    add(); // nothing can be given as parameter. Because function will take any input --> add(void)
    
    return 0;
}


// input ---> 32 13