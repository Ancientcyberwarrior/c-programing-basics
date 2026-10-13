#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int n, i;
    char str[50], str1[10];


        printf("Enter string:");
        scanf("%s", &str);

         printf("Enter string:");
        scanf("%s", &str1);

       strcat(str, str1);
        printf(" %s\n", str);


}

