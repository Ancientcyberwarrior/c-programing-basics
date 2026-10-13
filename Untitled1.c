#include <stdio.h>
#include <string.h>

int main ()
{
    char a[5];


strncpy(a, "jacsonfellow", sizeof(a) - 1);
a[sizeof(a) - 1] = '\0';

    printf("%s",a);


    return 0;
}
