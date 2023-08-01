#include <stdio.h>

int main()
 {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("Enter an integer value: ");
    scanf("%d", &myInt);

    printf("Enter a floating-point value: ");
    scanf("%f", &myFloat);

    printf("Enter a double value: ");
    scanf("%lf", &myDouble);

    printf("Enter a character: ");
    scanf(" %c", &myChar);

    printf("Value of myInt: %d\n", myInt);
    printf("Value of myFloat: %f\n", myFloat);
    printf("Value of myDouble: %lf\n", myDouble);
    printf("Value of myChar: %c\n", myChar);

    return 0;
}
