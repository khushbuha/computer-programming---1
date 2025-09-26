#include<stdio.h>
int main()
{
     char name[20];
     printf("enter name\n" );
    //scanf("%s",name);
     //printf("name is %s",name);
     gets(name);
     printf("name is %s\n",name);

     int i=0;
     while(name[i]!='\0')

     {
         i++;
     }
     printf("string length is %d",i);
}
