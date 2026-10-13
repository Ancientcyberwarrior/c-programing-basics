#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int n, copy, rev=0;
        printf("\n Enterthe Value OF N : ");
        scanf("%d",&n);

    copy=n;
     while (copy>0)
     {
         rev=rev*10;
         rev=rev+(copy%10);
         copy/=10;
     }

      if (n==rev)
      {
          printf("\n Entered Number is palindrome");
      }
      else
      {
          printf("\n Entered Number is Not palindrome");
      }
}

