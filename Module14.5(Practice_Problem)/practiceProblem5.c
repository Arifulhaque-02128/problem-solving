#include<stdio.h>


char capital_to_small(char capital){

    char small = capital + 32;
    return small;
}

int main ()
{
    char x;
    scanf("%c", &x);

    char small = capital_to_small(x);

    printf("%c", small);
    return 0;
}


// input ----> A or Q or Z