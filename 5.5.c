#include <stdio.h>
int main()
{
    int number,digit,reversed_number = 0;

    printf("Enter a Number:");
    scanf("%d",&number);

   do {
    digit = number % 10;
    reversed_number = reversed_number * 10 + digit;
    number /= 10;
   }while(number != 0);

    printf("Reversed Number: %d \n",reversed_number);
return (0);

}
