#include<stdio.h>

int main ()
{
    int m1, m2, d;
    scanf("%d %d %d\n", &m1, &m2, &d);

    float dayForOnePerson = (m1*d*1.0);

    int dayForM2Person = dayForOnePerson/m2;

    printf("%d\n", dayForM2Person);
    return 0;
}