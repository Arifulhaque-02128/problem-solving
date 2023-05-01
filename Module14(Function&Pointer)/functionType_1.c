// return + parameter

#include<stdio.h>

int add(int x, int y){
    int sum = x+y;
    return sum;
}

int main ()
{
    int sum = add(50, 60);

    printf("%d", sum);
    
    return 0;
}