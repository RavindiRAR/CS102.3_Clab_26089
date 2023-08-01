#include <stdio.h>
int main()
{
   int no, i, flg = 0;
   printf("Enter a positive integer: ");
   scanf("%d", &no);

  if (no == 0 || no == 1)
    flg = 1;

  for (i = 2; i <= no / 2; ++i)
    {
    if (no % i == 0)
    {       flg = 1;
     break;
    }
  }

  if (flg == 0)
    printf("%d is a prime number.", no);
  else
    printf("%d is not a prime number.", no);

}
