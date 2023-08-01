#include <stdio.h>
int main()
{
    float basic Salary, monthly Sales;
    char city;
    float additional Allowance = 0;
    float bonus = 0;
    float gross Remuneration;

    printf("Enter the basic salary: ");
    scanf("%f", &basic Salary);

    printf("Enter the monthly sales (in Rs.): ");
    scanf("%f", &monthly Sales);

    printf("Enter the city ('C' for Colombo, 'O' for other cities): ");
    scanf(" %c", &city);

    if (monthly Sales >= 0 && monthly Sales <= 25000)
        bonus = 0.10 * monthly Sales;
    else if (monthly Sales > 25000 && monthly Sales <= 50000)
        bonus = 0.12 * monthly Sales;
    else if (monthly Sales > 50000)
        bonus = 0.15 * monthly Sales;


    if (city == 'C')
        additional Allowance = 2500;


    gross Remuneration = basic Salary + additional Allowance + bonus;

    printf("Gross Monthly Remuneration: %.2f\n",      gross Remuneration);

    return 0;
}
