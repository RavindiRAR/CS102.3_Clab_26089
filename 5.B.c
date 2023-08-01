#include <stdio.h>
int main()
{
    int no,counter=1,p=0,n=0,z=0;
    while(counter<=10)
    {
        printf("Enter %d number ",counter);
        scanf("%d",&no);
        if(no>0)
            p++;
        else if(no<0)
            n++;
        else
            z++;

        counter++;
    }
    printf("Total number of positives %d \n",p);
    printf("Total number of negatives %d \n",n);
    printf("Total number of zeros %d \n",z);
}
