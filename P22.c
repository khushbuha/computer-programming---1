#include<stdio.h>
int main()
{
    float g_sal ;
    printf("Enter amount of gross salray :\n");
    scanf("%f", &g_sal);

    float dcnt = g_sal*0.1;

    float n_sal;
    printf("total value of net salses is : %f",g_sal - dcnt);

    return 0;
}
