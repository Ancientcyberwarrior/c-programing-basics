#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int n, arry[50], min, max, i;

    printf("Enter The N: \n");
    scanf("%d", &n);


    for (i=0; i<n; i++)
    {

        printf("Enter Elements %d\n", i);
        scanf("%d",&arry[i]);
    }

    min=arry[0];
    max=arry[0];

    for(i=1; i<n; i++)
    {
        if (arry[i] > max)

        {
            max=arry[i];

        }
        if (arry[i] < min)
        {
            min=arry[i];
        }

    }
    printf("\n max : %d",max);
    printf("\n min : %d",min);
}
