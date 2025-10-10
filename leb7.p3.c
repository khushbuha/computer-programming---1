#include<stdio.h>
void mult()
{
    int a,b,multiply=0;
    printf("enter two value\n");
    scanf("%d%d",&a,&b);
    multiply=a*b;
    printf("\n multiply is = %d",multiply);
}

int main()
{
    mult();
}
