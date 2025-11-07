#include<stdio.h>
int main()
{
 int factorial(int);
 printf("%d",factorial(5));

}
int factorial(int i)
{
 if(i==1)
 return 1;
 else
 return(i*factorial(i-1));

}
