#include <stdio.h>
#include <conio.h>

int main ()
{
    int i=1, n, sum=0;

    printf("\n Enter The Value OF N : ");
    scanf("%d",&n);

    while (i<=n)
    {

        sum=sum+i;
        i++;


    }

      printf("\n The Value OF Sum is : %d",sum);
}
