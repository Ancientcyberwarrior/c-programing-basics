#include <stdio.h>
#include <conio.h>

int main ()
{
    int i=1, n, fact=1;

    printf("Enter The Value N : ");
    scanf("%d",&n);


    do
    {
        fact= fact*i;
        i++;
    }

    while (i<=n);
    {
        printf(" The Factorial Of Given Number is  : %d",fact);
    }

}
