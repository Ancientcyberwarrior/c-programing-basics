#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>


int main ()
{    int arry[2][2], i, j;

    for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {   printf("\nEnter Element:" );
            scanf("%d", &arry[i][j]);
        }
    }

      for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {   printf("%d", arry[i][j] );

        }
        printf("\n");
    }
    getch();
}
