#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>


int main ()
{    int arry1[2][3], arry2[2][3], i, j;

    for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {   printf("\nEnter Element:" );
            scanf("%d", &arry1[i][j]);
        }
    }
     printf("\n Next Array: \n");
    for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {   printf("\nEnter Element:" );
            scanf("%d", &arry2[i][j]);
        }
    }

      for(i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {   printf("%d", arry1[i][j]+arry2[i][j] );

        }
        printf("\n");
    }
    getch();
}

