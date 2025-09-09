#include<stdio.h>

int main()
{
    int maths,phy,chem;

    printf("enter marks of maths : ");
    scanf("%d",&maths);

    printf("enter matks of physics : ");
    scanf("%d",&phy);

    printf("enter marks of chemistry : ");
    scanf("%d",&chem);

    int total;
    printf("total marks of all three subject : %d\n",maths+phy+chem);

    int ave;
    printf("avrage of three subject marks is : %d\n", (maths+phy+chem)/3);

    return 0;
}
