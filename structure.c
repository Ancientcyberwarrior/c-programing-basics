#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>


struct book{

        int no;
        float price;
        char author [50];

};

int main ()
{
     struct book hp;
     struct book arasiyal;
     struct book finance;
     struct book history;
     struct book usa;


     hp.no=7;
     hp.price=550.75;
     strcpy(hp.author, "jk rowling");

     printf("\n%d\n",hp.no);
     printf("\n%f\n",hp.price);
     printf("\n%s\n",hp.author);

    arasiyal.no=10;
    arasiyal.price=500.45;
   strcpy(arasiyal.author, "BR Ambedkar");

     printf("\n%d\n",arasiyal.no);
     printf("\n%f\n",arasiyal.price);
     printf("\n%s\n",arasiyal.author);

     finance.no=13;
    finance.price=1800.45;
   strcpy(finance.author, "waren bafet");

    printf("\n%d\n",finance.no);
     printf("\n%f\n",finance.price);
     printf("\n%s\n",finance.author);

      history.no=11;
     history.price=1000.75;
     strcpy(history.author, "Robert");

      printf("\n%d\n",history.no);
     printf("\n%f\n", history.price);
     printf("\n%s\n",history.author);

      usa.no=15;
     usa.price=330.75;
     strcpy(usa.author, "vascodogoma");

        printf("\n%d\n",usa.no);
     printf("\n%f\n", usa.price);
     printf("\n%s\n",usa.author);

    return 0;
}
