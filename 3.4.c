#include <stdio.h>
int main()
{
    float radius, diameter, circumference, area, PI=3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter of the circle: %f\n", diameter);
    printf("Circumference of the circle: %f\n", circumference);
    printf("Area of the circle: %f\n", area);

    return 0;
}
