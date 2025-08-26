#include<stdio.h>
int main()
{
    int hor;
    printf("Enter value of hour : ");
    scanf("%d",&hor);

    int min = hor*60;
    printf("value of %d hour in minute is %d ",hor,min);
}
