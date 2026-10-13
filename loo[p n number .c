#include <stdio.h>
#include <conio.h>

int main ()
{
    int i, n, sum=0;

    printf("Enter Value of n : " );
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        sum= sum+i;
    }

    printf("%Value of Sum is : %d",sum);
}
