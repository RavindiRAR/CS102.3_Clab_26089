#include <stdio.h>

#define overtime_rate 150
#define overtime_rate_excess 200
int main()
{
    int emp_no,hours,tot_emp = 0,emp_exc_4000 = 0;

    while (1) {
        printf("Enter employee number (or -999 to end): ");
        scanf("%d", &emp_no);

        if (emp_no == -999)
        {             break;         }

        printf("Enter hours worked by the employee: ");
        scanf("%d", &hours);

        tot_emp++;


        int overtime_hours = (hours > 40) ? (hours - 40) : 0;
        int overtime_payment = (overtime_hours * overtime_rate) + ((overtime_hours - 40) * overtime_rate_excess);


         if (overtime_payment > 4000)
        {
            emp_exc_4000++;
        }
        printf("Employee number: %d\n", emp_no);
        printf("Overtime Payment: %d\n", overtime_payment);
        printf("--------------------------------\n");
    }
    float percentage_exceeding_4000 = (float)emp_exc_4000 / tot_emp * 100;
    printf("Percentage 	of 	employees 	exceeding 	Rs. 	4000: 	%.2f\n", percentage_exceeding_4000);

}
