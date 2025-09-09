#include<stdio.h>
int main()
{
    float feh;
    printf("Enter value of feranhit : ");
    scanf("%f",&feh);

    float cel = (0.56)*(feh-32);
    printf("value of celcius is : %f", cel);

    return 0;
}
