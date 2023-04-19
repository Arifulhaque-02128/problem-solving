// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include<stdio.h>

int main ()
{
    char x[21], y[21];
    scanf("%s %s", x, y);
    int i=0;
    while(1){
        if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s\n", x);
            break;
        }
        else if (x[i] == '\0')
        {
            printf("%s\n", x);
            break;
        } 
        else if (y[i] == '\0')
        {
            printf("%s\n", y);
            break;
        }


        if (x[i] < y[i])
        {
            printf("%s\n", x);
            break;
        }
        else if (y[i] < x[i])
        {
            printf("%s\n", y);
            break;
        }
        else
        {
            i++;
        }
        
        
    }
    
    return 0;
}