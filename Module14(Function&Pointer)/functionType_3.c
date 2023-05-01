// No return + parameter

#include<stdio.h>

// void ---> return nothing
void add(int x, int y){
    int sum = x + y;
    printf("%d", sum);
    return;
}

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    add(a, b);
    
    return 0;
}



// input ---> 32 13