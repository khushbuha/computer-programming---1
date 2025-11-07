#include<stdio.h>

struct book
{
 char title[20];
 char author[20];
 int edition;
 char isbn[14];
 char publisher[20];
 float price;
};

int main()
{

    struct book b1,b2;
    printf("objects b1& b2 of structure book are created.\n");

      struct book b3={"let us c","yk",4,"81-7656-940-2","BPB",180};

     printf("the content of object b3 is...\n");
     printf("title : %s\n",b3.title);
     printf("author : %s\n",b3.author);
     printf("edition : %d\n",b3.edition);
     printf("isbn : %s\n",b3.isbn);
     printf("publisher : %s\n",b3.publisher);
     printf("price : %.2f\n",b3.price);
     b1=b3;


    void display(struct book);

    printf("the content of object b1 is...\n");
    display(b1);

    printf("enter information for b2 object.\n");
    printf("enter a book name  :");
    gets(b2.title);
     printf("enter author name  :");
    gets(b2.author);
     printf("enter edition no  :");
    scanf("%d",&b2.edition);
     printf("enter isbn  :");
     fflush(stdin);
    gets(b2.isbn);
     printf("enter name of publisher  :");
    gets(b2.publisher);
     printf("enter price of the book  :");
    fflush(stdin);
    scanf("%f",&b2.price);


    printf("the content of object b2 is ...\n");
    display(b2);

    void display_price(float,char*);

    display_price(b1.price,"book 1");
     display_price(b1.price,"book 2");
      display_price(b1.price,"book 3");
   getch();

};

void display(struct book b)
{
    printf("title :%s");
    printf("title : %s\n",b.title);
     printf("author : %s\n",b.author);
     printf("edition : %d\n",b.edition);
     printf("isbn : %s\n",b.isbn);
     printf("publisher : %s\n",b.publisher);
     printf("price : %.2f\n",b.price);
}

void display_price(float cost,char*message)
{

    printf("%s\s cost is %.2f\n",message,cost);

}
