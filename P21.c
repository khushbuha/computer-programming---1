#include<stdio.h>
int main()
{
    float g_sal ;

    printf("Enter amount of gross salray :\n");
    scanf("%f", &g_sal);

    float allo = g_sal*0.1;
    float ded = g_sal*0.03;

    float n_sal = g_sal + allo - ded;

    printf("total net salary = %f", n_sal);

}
