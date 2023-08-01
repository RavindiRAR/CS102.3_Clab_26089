#include <stdio.h>
int main()
{
    int  i, a[10],evenC = 0;

    for(i=0;i<10;i++)
    {
        printf("Enter a value to the element %d ",i+1);
        scanf("%d",&a[i]);
    }

    for(i = 0; i <10; i ++)
    {
        if(a[i] % 2 == 0) evenC++;
    }
        printf("\n Total Number of Even Numbers = %d ", evenC);
 }
