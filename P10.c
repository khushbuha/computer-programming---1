#include<stdio.h>
int main()
{
    float dlr;
    printf("Enter value of dollar : ");
    scanf("%f",&dlr);

    float pnd = dlr*1.36;
    printf("value of pound is : %f", pnd);

    return 0;

}
