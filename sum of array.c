#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int height[50],i ,n, sum=0;

    printf("Enter The Number of Stuents\n");
    scanf("%d", &n);


    for (i=0; i<n; i++)
    {

        printf("Nuber of students %d\n", i);
        scanf("%d",&height[i]);
        sum=sum+height[i];
    }

    printf("sum :%d\n", sum);
    printf("avg:%f\n",((float)sum/n));

}
