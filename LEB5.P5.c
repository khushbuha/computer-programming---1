#include<stdio.h>
void main()
{
     char name[50];
     printf("enter name\n" );

     gets(name);

{

    int i;

    for(i=0;name[i]!='\0';i++)
    {


         if(name[i]>='a'&&name[i]<='z')
         {
             name[i]=name[i]-32;
         }
    }
             printf("name is %s\n",name);
         }
     }
