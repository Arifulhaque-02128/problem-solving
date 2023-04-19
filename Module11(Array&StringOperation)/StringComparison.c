// manually

#include<stdio.h>

int main ()
{

    char a[100], b[100];

    scanf("%s %s", a, b);

    int i = 0;

    while (1)
    {
        
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("a and b is same\n");
            break;
        } else if (b[i] == '\0') {
            printf("b(%s) is smaller than a(%s)\n", b, a);
            break;
        } else if (a[i] == '\0') {
            printf("a(%s) is smaller than b(%s)\n", a, b);
            break;
        }


        if (a[i] > b[i])
        {
            printf("b(%s) is smaller than a(%s)\n", b, a);
            break;
        } 
        else if (b[i] > a[i])
        {
            printf("a(%s) is smaller than b(%s)\n", a, b);
            break;
        } 
        else
        {
            i++;
        }
 
    }
    
    return 0;
}