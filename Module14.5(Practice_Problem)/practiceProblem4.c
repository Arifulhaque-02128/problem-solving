#include<stdio.h>


char small_to_capital(char small){

    char capital = small - 32;
    return capital;
}

int main ()
{
    char x;
    scanf("%c", &x);

    char capital = small_to_capital(x);

    printf("%c", capital);
    return 0;
}


// input ----> a or q or z