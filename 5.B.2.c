#include <stdio.h>
int main()
{
    float prices[10],sum = 0,count = 0,avg;

    printf("Enter the prices of 10 items:\n");


    for (int i = 0; i < 10; i++)
    {
        printf("Item %d: Rs", i + 1);
        scanf("%f", &prices[i]);

        sum += prices[i];
        if (prices[i] > 200)
        {

                count++;
        }
    }

    avg = (float)sum / 10.0;

    printf("Average value of an item: $%.2f\n", avg);
    printf("Number of items with a price greater than 200: %d\n", count);
}
