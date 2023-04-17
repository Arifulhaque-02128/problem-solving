#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int numOfEven=0, numOfOdd=0, numOfPos=0, numOfNeg=0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a>0)
        {
            numOfPos = numOfPos + 1;

            if (a%2 == 0)
            {
                numOfEven = numOfEven + 1;
            } else {
                numOfOdd = numOfOdd + 1;
            }

        }

        if (a<0)
        {
            numOfNeg = numOfNeg + 1;

            if (a%2 == 0)
            {
                numOfEven = numOfEven + 1;
            } else {
                numOfOdd = numOfOdd + 1;
            }

        }

        if (a == 0)
        {
            numOfEven = numOfEven + 1;
        }
        
        
    }

    printf("Even: %d\n", numOfEven);
    printf("Odd: %d\n", numOfOdd);
    printf("Positive: %d\n", numOfPos);
    printf("Negative: %d\n", numOfNeg);
    
    return 0;
}