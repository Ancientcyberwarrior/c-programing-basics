#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int n,i, flag=0;
        printf("\n Enterthe Value OF N : ");
        scanf("%d",&n);

        for(i=2; i<n; i++)
        {
            if(n%i !=0)
                continue;
            else
            {
                flag=1;
                printf("not prime number");
                break;
            }
        }

        if(flag==0)
        {
            printf("prime");
        }
}
