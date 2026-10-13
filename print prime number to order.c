
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int n,i, flag, j;
    printf("\n Enterthe Value OF N : ");
    scanf("%d",&n);

    for (j=1; j<=n; j++)
    {
        if (j==1)
        {
            printf("Not Prime \n");
            continue;
        }

        flag=0;

        for(i=2; i<j; i++)
        {
            if(j%i !=0)
                continue;
            else
            {
                flag=1;
                printf("not prime number\n");
                break;
            }
        }

        if(flag==0)
        {
            printf("prime\n");
        }

    }
}
