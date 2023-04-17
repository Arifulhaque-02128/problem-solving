#include<stdio.h>

int main ()
{
    char a;
    scanf("%c", &a);

    if (a>47 && a<58)
    {
       printf("IS DIGIT\n");
    }

    if (a>64 && a<93)
    {
       printf("ALPHA\n");
       printf("IS CAPITAL\n");
    } 

    if (a>95)
    {
       printf("ALPHA\n");
       printf("IS SMALL\n");
    }
    
    
    return 0;
}