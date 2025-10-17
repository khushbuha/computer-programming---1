#include<stdio.h>
#include<math.h>
int power(inta,intb);
int main()
{
    int a,b,raised_val;

    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    raised_val = power(a,b);

    printf("result: %d",raised_val);
}
int power(int a, int b)
{

    int x;
    x=pow(a,b);

    return x;
}
