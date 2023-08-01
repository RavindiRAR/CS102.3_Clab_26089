#include<stdio.h>
int main()
{
   float Basic_Salary,New_Salary,inc;
   char empname[30];

   printf("Enter the employee_name: ");
   scanf("%s",&empname);
   printf("Enter the Basic_Salary: ");
   scanf("%f",&Basic_Salary);

   if (Basic_Salary < 5000)
     inc = Basic_Salary * 0.05;
   else if (5000 <= Basic_Salary < 1000)
     inc = Basic_Salary * 0.1;
   else
     inc = Basic_Salary * 0.15;


   New_Salary = Basic_Salary + inc;

   printf("Employee_Name: %s\n", empname);
   printf("New_Salary: %.2f\n", New_Salary);


return (0);
}
