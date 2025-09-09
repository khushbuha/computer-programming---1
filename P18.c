#include<stdio.h>
int main()
{
    int l;
    printf("Enter value of l : ");
    scanf("%d", &l);

    int b;
    printf("Enter value of b : ");
    scanf("%d", &b);

    int area;
    printf("area of rectengle is : %d\n", l*b);

    int p_mtr;
    printf("perimeter of square is : %d\n", 2*(l+b));

    return 0;
}
