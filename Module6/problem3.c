#include<stdio.h>

int main ()
{
    int a;
    while (scanf("%d\n", &a))
    {
        if (a != 1999)
        {
            printf("Wrong\n");
        } else {
            printf("Correct\n");
            break;
        }
        
    }
    
    
    
    return 0;
}