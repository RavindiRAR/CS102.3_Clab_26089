#include <stdio.h>
int main()
{
    float mark[10],sum=0,avg,max=0,min=0;
    int i;


    for(i=0;i<10;i++)
    {
        printf("Enter %d student marks: ",i+1);
        scanf("%f", &mark[i]);
    }

    for (i = 1; i <10; i++)
    {
        if(mark[i]>max)
            max=mark[i];
        else
            min=mark[i];

        sum = sum+mark[i];
    }
    avg=sum/10.0;

    printf("The maximum mark is %.2f\n", max);
    printf("The minimum mark is %.2f\n", min);
    printf("The average mark is %.2f\n", avg);
}
