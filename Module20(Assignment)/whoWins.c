#include<stdio.h>

int main ()
{
    int rounds;
    scanf("%d", &rounds);

    int x1, x2;
    int tiger = 0, pathan = 0;
    for (int i = 0; i < rounds; i++)
    {
        scanf("%d %d", &x1, &x2);
        if (x1>x2)
        {
            tiger++;
        } else if (x2>x1){
            pathan++;
        }
    }

    if (tiger>pathan)
    {
        printf("Tiger\n");
    } else if (pathan>tiger){
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }
    
    
    return 0;
}

// input ---> 5
// 10 20
// 30 20
// 15 16
// 100 20
// 50 45


// input ---> 5
// 10 20
// 30 20
// 15 16
// 20 20
// 50 45