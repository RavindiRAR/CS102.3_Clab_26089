#include<stdio.h>
int main()
{
    int n1,n2,n3;
    int largest,smallest;

    printf("Enter the first number:");
    scanf("%d",&n1);

    printf("Enter the second number:");
    scanf("%d",&n2);

    printf("Enter the third number:");
    scanf("%d",&n3);

    largest = n1;
    smallest = n1;

    if (n2 > largest)
        largest = n2;
    if (n2 < smallest)
        smallest = n2;
    if (n3 > largest)
        largest = n3;
    if (n3 < smallest)
        smallest = n3;
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);


return (0);
}
