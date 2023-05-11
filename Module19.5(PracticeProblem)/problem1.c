#include<stdio.h>

int main ()
{
    float discount, p_price;
    scanf("%f %f", &discount, &p_price);

    float o_price = ((100*p_price)/(100-discount));

    printf("%.2f", o_price);

    return 0;
}


// input ---> 15 20 or 20 80