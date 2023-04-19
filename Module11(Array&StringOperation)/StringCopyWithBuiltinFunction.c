#include<stdio.h>
#include<string.h>

int main ()
{
    char a[100], b[100];  
    scanf("%s %s", a, b);

    printf("%s %s\n", a, b);

    strcpy(a, b);  // b will be copied to a 
    
    printf("%s %s\n", a, b);

    return 0;
}