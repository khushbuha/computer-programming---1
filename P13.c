#include<stdio.h>
int main()
{
    float byte;
    printf("Enter value of bytes : ");
    scanf("%f",&byte);

    float kb = byte/1024;
    printf("value of bytes in kb is : %f\n", kb);

    float mb = kb/1024;
    printf("value of bytes in mb os : %f\n", mb);

    float gb = mb/1024;
    printf("value of bytes in gb is : %f\n", gb);

    return 0;
}
