#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int n, i;
    char str[50];

      printf("Enter The N: \n");
        scanf("%d", &n);

        printf("Enter string:");
        scanf("%s", &str);

        printf(" %s\n", str);

        for(i=0; i<n; i++)
        {
            printf("%c",str[i]);
        }

}
