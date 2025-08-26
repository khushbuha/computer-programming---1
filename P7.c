#include<stdio.h>
int main()
{
    int min;
    printf("Enter value of minute : ");
    scanf("%d",&min);

    int hor = min/60;
    printf("value of %d minutes in hour is %d hour",min,hor);
}
