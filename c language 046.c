#include <stdio.h>
main()
{  float basicSalary, allowances, deductions, grossSalary, netSalary, bonus; int experience;
printf("Enter Basic Salary: ");
scanf("%f", &basicSalary);
printf("Enter Allowances: ");
scanf("%f", &allowances);
printf("Enter Deductions: ");
scanf("%f", &deductions);
printf("Enter Experience (in years): ");
scanf("%d", &experience);
grossSalary = basicSalary + allowances;
netSalary = grossSalary - deductions;
if (experience > 5)
{
bonus = 3 * netSalary;
}
else
if (experience > 3)
{
bonus = 2 * netSalary;
}
else
{
bonus = 1 * netSalary;
}
printf("\nBasic Salary: %.2f\n", basicSalary);
printf("Allowances: %.2f\n", allowances);
printf("Deductions: %.2f\n", deductions);
printf("Experience: %d years\n", experience);
printf("Gross Salary: %.2f\n", grossSalary);
printf("Net Salary: %.2f\n", netSalary);
printf("Bonus: %.2f\n", bonus);
}

