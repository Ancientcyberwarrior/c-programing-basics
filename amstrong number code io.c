#include <stdio.h>
#include <conio.h>
#include <math.h>


void main ()
{
    int n, copy, sum=0,digits=0;

    printf("\n Enter Value of N : ");
    scanf("%d",&n);
    copy=n;
    while (copy>0)
    {
        digits++;
        copy= copy/10;
    }
    copy=n;

    while (copy>0)
    {
        sum=sum + pow((copy%10), digits);
        copy=copy/10;
    }
    if(sum==n)
    {
        printf("entered Number is Amstrong Number");
    }
    else
    {
        printf("Entered Number is Not an Amstrong Number");
    }

     getchar();
}
