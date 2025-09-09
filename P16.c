#include<stdio.h>

int main ()
{
    float period = 12; //moanth
    float rate = 2;
    float net_amnt = 100;

    float interest = (period*rate*net_amnt)/100;

    printf("total interest is : %f", interest);

    return 0;
}
