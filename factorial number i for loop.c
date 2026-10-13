#include <stdio.h>
#include <conio.h>

int main ()
{
    int i, n, fact=1;

    printf("Enter The Value OF N : ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        fact = fact*i;
    }
      printf("The Factorial Number is : %d",fact);
}
