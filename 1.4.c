#include <stdio.h>

int main() {
    int num1, num2, total;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("The total is: %d\n", total);

    return 0;
}
