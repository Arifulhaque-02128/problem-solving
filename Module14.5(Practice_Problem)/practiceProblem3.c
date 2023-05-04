#include<stdio.h>

int char_to_ascii(char x){

    int val = x;

    return val;
}

int main ()
{

    char x;
    scanf("%c", &x);

    int ascii = char_to_ascii(x);

    printf("%d\n", ascii);
    
    return 0;
}

// input ----> a or A or 0