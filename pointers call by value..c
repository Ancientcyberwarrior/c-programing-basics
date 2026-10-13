#include <stdio.h>
#include <conio.h>
#include <math.h>




 void sawp(int *x, int *y)
 {
     int temp=*x;
     *x=*y;
     *y=temp;
 }


int main ()
{
    int a=5;
    int b=7;
    printf("%d %d\n" ,a,b);

    sawp(&a,&b);

     printf("%d %d\n" ,a,b);

    return 0;
    getch();
}
