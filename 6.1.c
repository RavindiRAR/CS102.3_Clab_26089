#include <stdio.h>

int main() {
    int arr[10];
    int i, minValue, maxValue, sum = 0;


    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    minValue = maxValue = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }


    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    float averageValue = (float)sum / 10.0;


    int temp;
    for (i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }


    printf("\nMinimum value: %d\n", minValue);
    printf("Maximum value: %d\n", maxValue);
    printf("Average value: %.2f\n", averageValue);

    printf("\nValues in reverse order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
