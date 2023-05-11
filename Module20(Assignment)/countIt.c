#include<stdio.h>

int main ()
{
    char str[1001];
    fgets(str, 1001, stdin);

    int cntSmall = 0;
    int cntCapital = 0;
    int cntSpace = 0;

    int i = 0;
    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 92)
        {
            cntCapital++;
        } else if (str[i] >= 97 && str[i] <= 122) {
            cntSmall++;
        } else if (str[i] == 32)
        {
            cntSpace++;
        }

        i++;
        
    }
    
    printf("Capital - %d\n", cntCapital);
    printf("Small - %d\n", cntSmall);
    printf("Spaces - %d\n", cntSpace);

    return 0;
}


// input ---> Hello Everyone

// input ----> I Hope You Have Been Enjoying