#include <stdio.h>
#include <conio.h>

int main ()
{



    int year;

    printf("Enter The Year : ");
    scanf("%d",&year);

    if (year%100 ==0)
    {
        if (year%400 ==0)
        {
            printf("\n Entered No is Leap Year");
        }
        else
     {
         printf("\n Entered No is Non Leap Year \n");

     }

    }
    else
    {
        if(year%4 ==0)
        {
           printf(" \n Entered No is Leap Year \n");
        }
        else
        {
            printf(" \n Entered No is Non Leap year \n");
        }
    }







}
