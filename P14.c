#include<stdio.h>
int main()
{
    float cel;

    printf("Enter value of celcius : \n");
    scanf("%f",&cel);

    float feh = (1.8*cel) + 32;
    printf("value of feranhit is : %f",feh);

    return 0;
}
