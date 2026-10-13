#include <stdio.h>
#include <conio.h>
#include <math.h>



 int fact (int n)
 {
     if(n <=1)

     return 1 ;
     return n*fact(n-1);
 }

int  main ()
 {
     int n=5;
     int c=fact(n);
     printf("%d",c);

     getch;
 }

