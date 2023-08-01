#include <stdio.h>
int main()
{
    int size;


    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vectorSum[size], scalarSum = 0;


    printf("Enter %d values for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }


    printf("Enter %d values for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }


    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }


    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }

    // Display scalar sum
    printf("\nScalar Sum: %d\n", scalarSum);


    printf("Vector Sum: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }

    return 0;
}
