#include <stdio.h>
int main()
{     int menu;
      float n1,n2;
        printf("Enter two numbers: ");
        scanf("%f %f",&n1,&n2);

        printf("\nSelect your operator\n");
        printf("Enter 1 to add(+)\n");
        printf("Enter 2 to substract(-)\n");
        printf("Enter 3 to multiply(*)\n");
        printf("Enter 4 to divide(/)\n");
        scanf("%d",&menu);

        printf("\n\n");

    switch(menu)
    {

        case 1: printf("Answer = %.2f\n",n1+n2); break;
        case 2: printf("Answer = %.2f\n",n1-n2); break;
        case 3: printf("Answer = %.2f\n",n1*n2); break;
        case 4: printf("Answer = %.2f\n",n1/n2); break;
        default: printf("Invalid operation");
    }
return (0);
}
