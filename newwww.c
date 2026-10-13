#include <stdio.h>


int main ()
{
    int salary;
    char grade;

    printf("\nEnter Your Grade :");
     grade=getchar();

    printf("\n Enter your salary :");
    scanf("%d",&salary);

    switch (grade)
    {   case 'a':
        salary *= 1.25;
        break;
         case 'b':
        salary *= 1.22;
        break;
         case 'c':
        salary *= 1.18;
        break;
         default:
             salary *= 1.5;


    }
    printf("\nYour salary is : %d" ,salary);
}
