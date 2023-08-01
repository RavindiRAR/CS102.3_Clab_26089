#include <stdio.h>
int main()
{
    int x,no,fac = 1;

    printf("Enter a Number:");
    scanf("%d",&no);

    if (no < 0)
    {
        printf("Error");
    }
    else
    {
        for(x=1; x<=no;x++)
         fac*=x;
    }
    printf("factorial = %d",fac);
return(0);
}
