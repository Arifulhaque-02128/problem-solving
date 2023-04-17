#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int sumOfEvenNum = 0, sumOfOddNum = 0 ;
    int temp;
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if (temp%2 == 0)
        {
            sumOfEvenNum = sumOfEvenNum + temp;
        } else {
            sumOfOddNum = sumOfOddNum + temp;
        }
        
    }

    printf("%d %d\n", sumOfEvenNum, sumOfOddNum);
    return 0;
}