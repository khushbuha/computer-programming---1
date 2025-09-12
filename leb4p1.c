#include<stdio.h>
void main()
{
    int n,num,reverse=0,rem;
    printf("enter the value");
    scanf("%d",&num);

    num=n;
    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(rem==num)
    {
        printf("the given number is a palindrom number %d",num);

    }
    else{
        printf("the given number is not a palindrom number %d",num);
    }
}
