#include<stdio.h>
void diff()
{
    int a,b,divides=0;
    printf("enter two value\n");
    scanf("%d%d",&a,&b);
    divides=a/(float )b;
    printf("\n divides is = %d",divides);
}

int main()
{
    diff();
}
