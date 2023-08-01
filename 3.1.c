#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter the first number:");
    scanf("%d",&n1);

    printf("Enter the second number:");
    scanf("%d",&n2);

    if (n1 > n2)
       printf("The highest number is: %d\n",n1);
    else
       printf("The highest number is: %d\n",n2);

return (0);
}
